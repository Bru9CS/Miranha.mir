%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex();
    int yyerror(char *s);
    FILE* outputFile;
    extern FILE *yyin;
    extern char* yytext;
    extern int lineNumber;
    FILE* tokenDebug;
%}

%token T_INT T_FLOAT T_CHAR T_SCAN T_PRINT T_IF T_ELSE T_ELSEIF T_SWITCH T_CASE T_DEFAULT T_CONTINUE T_BREAK T_WHILE T_FOR INT_CONST FLOAT_CONST CHAR_CONST STRING_CONST PLUS_OP MINUS_OP MULT_OP DIV_OP MOD_OP EQ_OP NE_OP GE_OP LE_OP GT_OP LT_OP AND_OP OR_OP NOT_OP ASSIGN_OP SEMICOLON COLON COMMA LPAREN RPAREN LBRACE RBRACE ID

%type <integer> INT_CONST
%type <floating> FLOAT_CONST
%type <character> CHAR_CONST
%type <text> STRING_CONST
%type <var> ID

%left PLUS_OP MINUS_OP
%left MULT_OP DIV_OP MOD_OP
%left EQ_OP NE_OP LT_OP LE_OP GT_OP GE_OP
%left AND_OP OR_OP

%union{
    int integer;
    float floating;
    char character;
    char text[256];
    char var[64];
}

%%

S:
    DECL S | CMD S | /*Vazio*/

DECL:
    TIPO ID SEMICOLON 
    {fprintf(outputFile, "%s;\n", $2);}
    | TIPO ID ASSIGN_OP
    {fprintf(outputFile, "%s = ", $2);}
    EXPR SEMICOLON
    {fprintf(outputFile, ";\n");}

TIPO:
    T_INT 
    {fprintf(outputFile, "int ");}
    | T_FLOAT 
    {fprintf(outputFile, "float ");}
    | T_CHAR
    {fprintf(outputFile, "char ");}

CMD:
    SE
    | COND
    | ENQUANTO
    | PARA
    | EXPR SEMICOLON
    {fprintf(outputFile, ";\n");}
    | T_BREAK SEMICOLON
    {fprintf(outputFile, "break;\n");}
    | T_CONTINUE SEMICOLON
    {fprintf(outputFile, "continue;\n");}
    | LE
    | ESCREVE
    | LBRACE
    {fprintf(outputFile, "{\n");}
    S RBRACE
    {fprintf(outputFile, "}\n");}

SE:
    T_IF LPAREN 
    {fprintf(outputFile, "if( ");}
    EXPR RPAREN 
    {fprintf(outputFile, ") ");}
    CMD OTHER

OTHER:
    /*Vazio*/ | ELIF | ELSE

ELIF:
    T_ELSEIF LPAREN  
    {fprintf(outputFile, "else{if( ");}
    EXPR RPAREN 
    {fprintf(outputFile, ") ");}
    CMD OTHER
    {fprintf(outputFile, "} ");}

ELSE:
    T_ELSE
    {fprintf(outputFile, "else ");}
    CMD

COND:
    T_SWITCH LPAREN 
    {fprintf(outputFile, "switch( ");}
    EXPR RPAREN LBRACE 
    {fprintf(outputFile, "){\n");}
    CASOS RBRACE
    {fprintf(outputFile, "}\n");}

ENQUANTO:
    T_WHILE LPAREN 
    {fprintf(outputFile, "while( ");}
    EXPR RPAREN 
    {fprintf(outputFile, ") ");}
    CMD

PARA:
    T_FOR LPAREN 
    {fprintf(outputFile, "for( ");}
    ITERADOR SEMICOLON 
    {fprintf(outputFile, "; ");}
    EXPR SEMICOLON
    {fprintf(outputFile, "; ");}
    EXPR RPAREN
    {fprintf(outputFile, ") ");}
    CMD

ITERADOR:
    EXPR | DECL

EXPR:
    ID ASSIGN_OP
    {fprintf(outputFile, "%s = ", $1);}
    EXPR 
    | EXPR OP EXPR
    | NOT_OP
    {fprintf(outputFile, "! ");}
    EXPR 
    | LPAREN 
    {fprintf(outputFile, "( ");}
    EXPR RPAREN
    {fprintf(outputFile, ") ");}
    | NUM 
    | ID
    {fprintf(outputFile, "%s ", $1);}

OP:
    ARITH_OP | RELAT_OP

RELAT_OP:
    EQ_OP
    {fprintf(outputFile, "== ");}
    | NE_OP
    {fprintf(outputFile, "!= ");}
    | LT_OP
    {fprintf(outputFile, "< ");}
    | LE_OP
    {fprintf(outputFile, "<= ");}
    | GT_OP
    {fprintf(outputFile, "> ");}
    | GE_OP
    {fprintf(outputFile, ">= ");}
    | AND_OP
    {fprintf(outputFile, "&& ");}
    | OR_OP
    {fprintf(outputFile, "|| ");}
    | NOT_OP
    {fprintf(outputFile, "! ");}

ARITH_OP:
    PLUS_OP
    {fprintf(outputFile, "+ ");}
    | MINUS_OP
    {fprintf(outputFile, "- ");}
    | MULT_OP
    {fprintf(outputFile, "* ");}
    | DIV_OP
    {fprintf(outputFile, "/ ");}
    | MOD_OP
    {fprintf(outputFile, "%% ");}

NUM:
    INT_CONST
    {fprintf(outputFile, "%d ", $1);}
    | FLOAT_CONST
    {fprintf(outputFile, "%f ", $1);}
    | CHAR_CONST
    {fprintf(outputFile, "'%c' ", $1);}

CASOS:
    T_CASE 
    {fprintf(outputFile, "case ");}
    EXPR COLON
    {fprintf(outputFile, ": ");}
    S CASOS
    | T_DEFAULT COLON
    {fprintf(outputFile, "default: ");}
    S 
    | /*Vazio*/

LE:
    T_SCAN LPAREN STRING_CONST
    {fprintf(outputFile, "scanf(\"%s\" ", $3);}
    VARLIST RPAREN SEMICOLON
    {fprintf(outputFile, ");\n");}

ESCREVE:
    T_PRINT LPAREN STRING_CONST
    {fprintf(outputFile, "printf(\"%s\" ", $3);}
    PARAM RPAREN SEMICOLON
    {fprintf(outputFile, ");\n");}

VARLIST:
    /*Vazio*/
    | COMMA ID
     {fprintf(outputFile, ", &%s", $2);}
     VARLIST

PARAM:
    /*Vazio*/
    | COMMA
     {fprintf(outputFile, ", ");}
     EXPR PARAM

%%

int yyerror(char *s){
    fprintf(stderr, "%s: unexpected '%s' at line %d\n", s, yytext, lineNumber);
}

int main(int argc, char* argv[]){
    //verifica formato da chamada
    if (argc < 2 || argc > 3) {
        fprintf(stderr, "Uso: %s arquivo.mir [-o]\n", argv[0]);
        return 1;
    }

    char outputC[256];
    char outputExe[256];
    char outputLog[256];

    // Copiar nome base sem extensão
    strncpy(outputC, argv[1], sizeof(outputC) - 1);
    outputC[sizeof(outputC) - 1] = '\0';

    // Trocar a extensão por .c
    char *ext = strrchr(outputC, '.');
    if (ext) {
        strcpy(ext, ".c");
    } else {
        strcat(outputC, ".c");
    }

    // Trocar a extensão por .log
    strncpy(outputLog, argv[1], sizeof(outputLog) - 1);
    outputLog[sizeof(outputLog) - 1] = '\0';
    ext = strrchr(outputLog, '.');
    if (ext) {
        strcpy(ext, ".log");
    } else {
        strcat(outputC, ".log");
    }

    // Criar nome do executável (sem extensão)
    strncpy(outputExe, outputC, sizeof(outputExe) - 1);
    outputExe[sizeof(outputExe) - 1] = '\0';
    ext = strrchr(outputExe, '.');
    if (ext) {
        *ext = '\0'; // Remove .c
    }

    outputFile = fopen(outputC, "w");
    if (!outputFile) {
        perror("Erro ao abrir output.c");
        exit(1);
    }

    fprintf(outputFile, "#include <stdio.h>\nint main(){\n");

    tokenDebug = fopen(outputLog, "w");
    if (!tokenDebug) {
        perror("Erro ao abrir .log");
        exit(1);
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Erro ao abrir arquivo de entrada");
        exit(1);
    }
    char result = yyparse();
    fclose(yyin);
    fprintf(outputFile, "\nreturn 0;\n}");
    fclose(outputFile);
    fclose(tokenDebug);

    if(result == 0){
        char cmd[512];
        snprintf(cmd, sizeof(cmd), "gcc %s -o %s", outputC, outputExe);
        if (system(cmd) != 0) {
            fprintf(stderr, "Falha ao compilar %s\n", outputC);
            return 1;
        }
    }

    // Apagar arquivo temporário .c
    if(argc == 3 && strcmp(argv[3], "-o")){
        if (remove(outputC) != 0) {
            perror("Erro ao remover output");
        }
    }
    return 0;
}
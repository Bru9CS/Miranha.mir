%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex();
    int yyerror(char *s);
    FILE* outputFile;
    extern FILE *yyin;
%}

%token T_INT T_FLOAT T_CHAR T_SCAN T_PRINT T_IF T_ELSE T_ELSEIF T_SWITCH T_CASE T_DEFAULT T_CONTINUE T_BREAK T_WHILE T_FOR INT_CONST FLOAT_CONST CHAR_CONST STRING_CONST PLUS_OP MINUS_OP MULT_OP DIV_OP MOD_OP EQ_OP NE_OP GE_OP LE_OP GT_OP LT_OP AND_OP OR_OP NOT_OP ASSIGN_OP SEMICOLON COLON COMMA LPAREN RPAREN LBRACE RBRACE ID

%type <integer> INT_CONST
%type <floating> FLOAT_CONST
%type <character> CHAR_CONST
%type <text> STRING_CONST
%type <var> ID

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
    {fprintf(outputFile, "%s = ;\n", $2);}
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
    | T_BREAK SEMICOLON
    | T_CONTINUE SEMICOLON
    | LE
    | ESCREVE
    | LBRACE S RBRACE

SE:
    T_IF LPAREN 
    {fprintf(outputFile, "if( ");}
    EXPR RPAREN 
    {fprintf(outputFile, ") ");}
    CMD ELIF ELSE

ELIF:
    /*Vazio*/ 
    | T_ELSEIF LPAREN  
    {fprintf(outputFile, "else if( ");}
    EXPR RPAREN 
    {fprintf(outputFile, ") ");}
    CMD ELIF

ELSE:
    /*Vazio*/ 
    | T_ELSE
    {fprintf(outputFile, "else ");}
    CMD

COND:
    T_CASE LPAREN 
    {fprintf(outputFile, "case( ");}
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
    {fprintf(outputFile, "%c ", $1);}

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
    PARAM RPAREN SEMICOLON
    {fprintf(outputFile, ");\n");}

ESCREVE:
    T_PRINT LPAREN STRING_CONST
    {fprintf(outputFile, "printf(\"%s\" ", $3);}
    PARAM RPAREN SEMICOLON
    {fprintf(outputFile, ");\n");}

PARAM:
    /*Vazio*/
    | COMMA
     {fprintf(outputFile, ", ");}
     EXPR PARAM

%%

int yyerror(char *s){
    printf("Syntax error at %s\n", s);
}

int main(int argc, char* argv[]){
    //verifica formato da chamada
    if (argc != 2) {
        fprintf(stderr, "Uso: %s arquivo.mir\n", argv[0]);
        return 1;
    }

    char outputC[256];
    char outputExe[256];

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

    fprintf(outputFile, "#include <stdio.h>\n");

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Erro ao abrir arquivo de entrada");
        exit(1);
    }
    yyparse();
    fclose(yyin);

    char cmd[512];
    snprintf(cmd, sizeof(cmd), "C:/msys64/mingw64/bin/gcc.exe -mconsole %s -o %s", outputC, outputExe);
    printf("Compilando com: %s\n", cmd);
    if (system(cmd) != 0) {
        fprintf(stderr, "Falha ao compilar %s\n", outputC);
        return 1;
    }

    // Apagar arquivo temporário .c
    /*if (remove("output.c") != 0) {
        perror("Erro ao remover output");
    }*/
    return 0;
}
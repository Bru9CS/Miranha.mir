%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "miranha.tab.h"
    int lineNumber = 1;
    void showError(char*, int);
    int yywrap();
    extern FILE* tokenDebug;
%}



integer [+-]?[0-9]+ 
floating [+-]?[0-9]+\.[0-9]+
characters '[a-zA-Z]'
string  \"[^\n\"]+\"

lineComment \/\/.*

id [a-zA-Z_][a-zA-Z0-9_]*
ws      [ \t]+

%%

"o_anuncio_dizia_tres_mil" {fprintf(tokenDebug, "%s => declaracao de inteiro\n", yytext); return(T_INT);}
"aluguel?" {fprintf(tokenDebug, "%s => declaracao de float\n", yytext); return(T_FLOAT);}
"e_so_um_pico" {fprintf(tokenDebug, "%s => declaracao de char\n", yytext); return(T_CHAR);}
"pode_falar" {fprintf(tokenDebug, "%s => scan\n", yytext); return(T_SCAN);}
"deixa_a_mamae_e_o_papai_conversarem" {fprintf(tokenDebug, "%s => print\n", yytext); return(T_PRINT);}
"com_grandes_poderes" {fprintf(tokenDebug, "%s => condicional\n", yytext); return(T_IF);}
"vem_grandes_responsabilidades" {fprintf(tokenDebug, "%s => condicional padrao\n", yytext); return(T_ELSE);}
"se_alguem_comesse_promessa_minha_filha_seria_gorda" {fprintf(tokenDebug, "%s => condicional extra\n", yytext); return(T_ELSEIF);}
"esta_um_lixo" {fprintf(tokenDebug, "%s => switch\n", yytext); return(T_SWITCH);}
"lixo" {fprintf(tokenDebug, "%s => caso\n", yytext); return(T_CASE);}
"super_lixo" {fprintf(tokenDebug, "%s => caso geral\n", yytext); return(T_DEFAULT);}
"voltei" {fprintf(tokenDebug, "%s => continuar\n", yytext); return(T_CONTINUE);}
"me_quebrei" {fprintf(tokenDebug, "%s => quebrar\n", yytext); return(T_BREAK);}
"aguenta_ai_mary_jane" {fprintf(tokenDebug, "%s => enquanto\n", yytext); return(T_WHILE);}
"dia_apos_dia" {fprintf(tokenDebug, "%s => para\n", yytext); return(T_FOR);}

{integer} {fprintf(tokenDebug, "%s => int\n", yytext); yylval.integer = atoi(yytext); return(INT_CONST);}
{floating} {fprintf(tokenDebug, "%s => float\n", yytext); yylval.floating = atof(yytext); return(FLOAT_CONST);}
{characters} {fprintf(tokenDebug, "%s => char\n", yytext); yylval.character = yytext[1];; return(CHAR_CONST);}
{string}  {fprintf(tokenDebug, "%s => string\n", yytext); strncpy(yylval.text, yytext + 1, yyleng - 2); yylval.text[yyleng - 2] = '\0'; return(STRING_CONST);}

"posso_fazer_mais" {fprintf(tokenDebug, "%s => mais\n", yytext); return(PLUS_OP);}
"eu_perdi_o_tio_ben" {fprintf(tokenDebug, "%s => menos\n", yytext); return(MINUS_OP);}
"potencializa_as_caracteristicas" {fprintf(tokenDebug, "%s => vezes\n", yytext); return(MULT_OP);}
"ele_roubou_o_cara_das_pizzas" {fprintf(tokenDebug, "%s => divide\n", yytext); return(DIV_OP);}
"quem_disse_que_isso_e_problema_meu" {fprintf(tokenDebug, "%s => resto\n", yytext); return(MOD_OP);}
"voce_e_como_eu" {fprintf(tokenDebug, "%s => igualdade\n", yytext); return(EQ_OP);}
"voce_nao_e_como_eu" {fprintf(tokenDebug, "%s => desigualdade\n", yytext); return(NE_OP);}
"voce_e_mais_forte_do_que_pensa" {fprintf(tokenDebug, "%s => maior ou igual\n", yytext); return(GE_OP);}
"ainda_nao_sou_tudo_que_posso_ser" {fprintf(tokenDebug, "%s => menor ou igual\n", yytext); return(LE_OP);}
"voce_esta_acima_disso" {fprintf(tokenDebug, "%s => maior\n", yytext); return(GT_OP);}
"voce_ainda_tem_muito_o_que_aprender" {fprintf(tokenDebug, "%s => menor\n", yytext); return(LT_OP);}
"juntos_podemos_conquistar_tudo" {fprintf(tokenDebug, "%s => e logico\n", yytext); return(AND_OP);}
"tem_sempre_outra_maneira" {fprintf(tokenDebug, "%s => ou logico\n", yytext); return(OR_OP);}
"isso_nao_e_verdade" {fprintf(tokenDebug, "%s => nao logico\n", yytext); return(NOT_OP);}
"eu_sou_outra_pessoa" {fprintf(tokenDebug, "%s => atribuicao\n", yytext); return(ASSIGN_OP);}

";" {fprintf(tokenDebug, "%s => ponto e virgula\n", yytext); return(SEMICOLON);}
":" {fprintf(tokenDebug, "%s => dois pontos\n", yytext); return(COLON);}
"," {fprintf(tokenDebug, "%s => virgula\n", yytext); return(COMMA);}
"(" {fprintf(tokenDebug, "%s => parentese esquerdo\n", yytext); return(LPAREN);}
")" {fprintf(tokenDebug, "%s => parentese direito\n", yytext); return(RPAREN);}
"{" {fprintf(tokenDebug, "%s => chave esquerda\n", yytext); return(LBRACE);}
"}" {fprintf(tokenDebug, "%s => chave direita\n", yytext); return(RBRACE);}

"\n"        {lineNumber++;}

{id} {fprintf(tokenDebug, "%s => variavel\n", yytext); strncpy(yylval.var, yytext, 63); yylval.var[63] = '\0'; return(ID);}

{ws} ;   /* tira espaçamentos */
{lineComment} ;
"/*"    {
        int c;

        while((c = input()) != 0)
            {
            if(c == '\n')
                ++lineNumber;

            else if(c == '*')
                {
                if((c = input()) == '/')
                    break;
                else
                    unput(c);
                }
            }
        }

. {showError(yytext, lineNumber);}

%%

int yywrap() {
    return 1;
}

void showError(char* t, int l){
    printf("Unexpected %s at line %d\n", t, l);
}
%{
    #include <stdio.h>
    #include <string.h>
    #include "miranha.tab.h"
    int lineNumber = 1;
    void showError(char*, int);
    int yywrap();
%}



integer [+-]?[0-9]+ 
floating [+-]?[0-9]+\.[0-9]+
characters '[a-zA-Z]'
string  \"[^\n\"]+\"

lineComment \/\/.*

id [a-zA-Z_][a-zA-Z0-9_]*
ws      [ \t]+

%%

"o_anuncio_dizia_tres_mil" {return(T_INT);}
"aluguel?" {return(T_FLOAT);}
"e_so_um_pico" {return(T_CHAR);}
"pode_falar" {return(T_SCAN);}
"deixa_a_mamae_e_o_papai_conversarem" {return(T_PRINT);}
"com_grandes_poderes" {return(T_IF);}
"vem_grandes_responsabilidades" {return(T_ELSE);}
"se_alguem_comesse_promessa_minha_filha_seria_gorda" {return(T_ELSEIF);}
"esta_um_lixo" {return(T_SWITCH);}
"lixo" {return(T_CASE);}
"super_lixo" {return(T_DEFAULT);}
"voltei" {return(T_CONTINUE);}
"me_quebrei" {return(T_BREAK);}
"aguenta_ai_mary_jane" {return(T_WHILE);}
"dia_apos_dia" {return(T_FOR);}

{integer} {yylval.integer = atoi(yytext); return(INT_CONST);}
{floating} {yylval.floating = atof(yytext); return(FLOAT_CONST);}
{characters} {yylval.character = yytext[1];; return(CHAR_CONST);}
{string}  {strncpy(yylval.text, yytext + 1, yyleng - 2); yylval.text[yyleng - 2] = '\0'; return(STRING_CONST);}

"posso_fazer_mais" {return(PLUS_OP);}
"eu_perdi_o_tio_ben" {return(MINUS_OP);}
"potencializa_as_caracteristicas" {return(MULT_OP);}
"ele_roubou_o_cara_das_pizzas" {return(DIV_OP);}
"quem_disse_que_isso_e_problema_meu" {return(MOD_OP);}
"voce_e_como_eu" {return(EQ_OP);}
"voce_nao_e_como_eu" {return(NE_OP);}
"voce_e_mais_forte_do_que_pensa" {return(GE_OP);}
"ainda_nao_sou_tudo_que_posso_ser" {return(LE_OP);}
"voce_esta_acima_disso" {return(GT_OP);}
"voce_ainda_tem_muito_o_que_aprender" {return(LT_OP);}
"juntos_podemos_conquistar_tudo" {return(AND_OP);}
"tem_sempre_outra_maneira" {return(OR_OP);}
"isso_nao_e_verdade" {return(NOT_OP);}
"eu_sou_outra_pessoa" {return(ASSIGN_OP);}

";" {return(SEMICOLON);}
":" {return(COLON);}
"," {return(COMMA);}
"(" {return(LPAREN);}
")" {return(RPAREN);}
"{" {return(LBRACE);}
"}" {return(RBRACE);}

"\n"        {lineNumber++;}

{id} {strncpy(yylval.var, yytext, 63); yylval.var[63] = '\0'; return(ID);}

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
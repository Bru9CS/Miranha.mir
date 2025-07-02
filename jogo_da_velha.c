#include <stdio.h>
int main(){
int i = 0 ;
int posicao;
int jogador = 0 ;
int vencedor = -1 ;
int tabVal;
int tab0 = 32 ;
int tab1 = 32 ;
int tab2 = 32 ;
int tab3 = 32 ;
int tab4 = 32 ;
int tab5 = 32 ;
int tab6 = 32 ;
int tab7 = 32 ;
int tab8 = 32 ;
while( i <= 8 ) {
printf("Tabuleiro atual:\n" );
printf("%c | %c | %c\n" , tab0 , tab1 , tab2 );
printf("--+---+--\n" );
printf("%c | %c | %c\n" , tab3 , tab4 , tab5 );
printf("--+---+--\n" );
printf("%c | %c | %c\n" , tab6 , tab7 , tab8 );
printf("Jogador %d, escolha uma posicao (1-9): " , jogador + 1 );
scanf("%d" , &posicao);
if( posicao > 0 || posicao <= 9 ) {
switch( posicao ){
case 1 : tabVal = tab0 ;
break;
case 2 : tabVal = tab1 ;
break;
case 3 : tabVal = tab2 ;
break;
case 4 : tabVal = tab3 ;
break;
case 5 : tabVal = tab4 ;
break;
case 6 : tabVal = tab5 ;
break;
case 7 : tabVal = tab6 ;
break;
case 8 : tabVal = tab7 ;
break;
case 9 : tabVal = tab8 ;
break;
}
if( tabVal == 32 ) {
if( jogador == 1 ) {
switch( posicao ){
case 1 : tab0 = 'O' ;
break;
case 2 : tab1 = 'O' ;
break;
case 3 : tab2 = 'O' ;
break;
case 4 : tab3 = 'O' ;
break;
case 5 : tab4 = 'O' ;
break;
case 6 : tab5 = 'O' ;
break;
case 7 : tab6 = 'O' ;
break;
case 8 : tab7 = 'O' ;
break;
case 9 : tab8 = 'O' ;
break;
}
}
else {
switch( posicao ){
case 1 : tab0 = 'X' ;
break;
case 2 : tab1 = 'X' ;
break;
case 3 : tab2 = 'X' ;
break;
case 4 : tab3 = 'X' ;
break;
case 5 : tab4 = 'X' ;
break;
case 6 : tab5 = 'X' ;
break;
case 7 : tab6 = 'X' ;
break;
case 8 : tab7 = 'X' ;
break;
case 9 : tab8 = 'X' ;
break;
}
}
jogador = ! jogador ;
if( ( tab0 == tab1 && tab1 == tab2 && tab0 != 32 ) || ( tab3 == tab4 && tab4 == tab5 && tab3 != 32 ) || ( tab6 == tab7 && tab7 == tab8 && tab6 != 32 ) || ( tab0 == tab3 && tab3 == tab6 && tab0 != 32 ) || ( tab1 == tab4 && tab4 == tab7 && tab1 != 32 ) || ( tab2 == tab5 && tab5 == tab8 && tab2 != 32 ) || ( tab0 == tab4 && tab4 == tab8 && tab0 != 32 ) || ( tab2 == tab4 && tab4 == tab6 && tab2 != 32 ) ) {
vencedor = ! jogador ;
break;
}
i = i + 1 ;
}
else {
printf("Posicao ocupada! Tente novamente.\n" );
}
}
else {
printf("Posicao invalida! Tente novamente.\n" );
}
}
printf("Tabuleiro final:\n" );
printf("%c | %c | %c\n" , tab0 , tab1 , tab2 );
printf("--+---+--\n" );
printf("%c | %c | %c\n" , tab3 , tab4 , tab5 );
printf("--+---+--\n" );
printf("%c | %c | %c\n" , tab6 , tab7 , tab8 );
if( vencedor == -1 ) {
printf("Deu velha! Ninguem venceu.\n" );
}
else {
printf("Jogador %d venceu!\n" , vencedor + 1 );
}

return 0;
}
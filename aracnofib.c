#include <stdio.h>
int main(){
int n;
int a = 1 ;
int b = 1 ;
int i = 3 ;
int fib;
printf("Digite o valor de n: " );
scanf("%d" , &n);
if( n < 1 ) {
printf("Forneca um numero maior que 0" );
}
else{if( n < 3 ) {
printf("Fibonacci eh: 1" );
}
else {
while( i <= n ) {
fib = a + b ;
a = b ;
b = fib ;
i = i + 1 ;
}
printf("Fibonacci eh: %d" , fib );
}
} 
return 0;
}
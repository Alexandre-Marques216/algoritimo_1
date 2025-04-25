/*criei tres variaveis 2 para valores e 1 para resultado
apos receber os valores do scanf realizei a conta necessario e devolvi os valores com o printf*/
#include <stdio.h>
int main(){
 int v1,v2,soma;
 printf("digite 2 valores inteiros");
 scanf("%d %d",&v1,&v2);
soma = v1+v2;
printf("%d\n",soma);
}
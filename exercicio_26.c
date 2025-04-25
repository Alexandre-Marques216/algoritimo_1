/*criei as duas variaveis para os valores da conta 
apos isso criei um if para confirmar se a soma dos valores e menor ou igual a dez e outro if para confirmar se a soma e menor que 10 */
#include <stdio.h>
int main(){
    int v1,v2;
    printf("digite 2 valores inteiros");
    scanf("%d %d",&v1,&v2);
    if(v1+v2>=10){
        printf("a soma dos valores é maior que 10");
    }
    if (v1+v2<10){
        printf("a soma dos valores não é maior que 10");
    }
}
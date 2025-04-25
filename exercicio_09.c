/*criei a variavel e apos receber seu valor criei um if que divide o valor recebido por 2 e verifica se o reto da divisao e 0 e informando que o valor e par
entrao criei outro if para caso o resto da divisao for diferente de zero informa que o numero e impar*/
#include <stdio.h>
int main(){
    int v1;
    printf("digite 1 valor inteiro");
    scanf("%d",&v1);
    if (v1%2==0){
    printf("é um valor par");
    }
        if(v1&2!=0){
        printf("é um valor impar");
    }
}
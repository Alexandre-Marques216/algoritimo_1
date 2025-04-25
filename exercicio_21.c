/*criei 3 variaveis 2 para os valores e uma para o resultado
apos receber os valores criei uma divisao
criei um if que confirma se o resultado da ultima conta e divisivel por 2 e o determina como par
criei um else para quando o numero nao seja par*/
#include <stdio.h>
int main(){
    int v1,v2,div;
    printf("digite 2 valores inteiros");
    scanf("%d %d",&v1,&v2);
    div = v1/v2;
    if (div%2==0){
    printf("é um valor par");
    }else{
        printf("é um valor impar");
    }
}
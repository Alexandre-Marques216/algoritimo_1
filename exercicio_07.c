/* criei as variaveis necessarias e peguei os valores dos 2 primeiros numeros e realizei a soma
peguei os outros 2 valores e os somei
realizei a divisao dos resultados das somas e retornei o valor final*/
#include <stdio.h>
int main(){
    int v1,v2,s1,v3,v4,s2,divisao;
    printf("digite 2 numeros");
    scanf("%d %d",&v1,&v2);
    s1=v1+v2;
    printf("digite 2 numeros");
    scanf("%d %d",&v3,&v4);
    s2=v3+v4;
    divisao = s1/s2;
    printf("%d\n",divisao);
}
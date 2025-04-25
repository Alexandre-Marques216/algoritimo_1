/*criei as variaveis para os numeros do sorteio
depois retornei os possiveis numeros do sorteio atravez do printf*/
#include <stdio.h>
int main(){
    int v1,v2,v3,v4,v5,v6;
    printf("digite 6 valores do sorteio");
    scanf("%d %d %d %d %d %d",&v1,&v2,&v3,&v4,&v5,&v6);
    printf("os valores do sorteio são:%d %d %d %d %d %d",v1,v2,v3,v4,v5,v6);
}
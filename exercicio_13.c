/*criei as variaveis para as duas datas e mas 4 variaveis para a conversao
apos receber os valores montei as equacoes necessarias e retornei o resultado final com o printf*/
#include <stdio.h>
int main(){
    int a1, m1, d1, d2,m2,a2,av,dv,mv,am;
    printf("digite sua data de nascimento");
    scanf("%d %d %d",&d1,&m1,&a1);
    printf("digite a data atual");
    scanf("%d %d %d",&d2,&m2,&a2);
    mv=m2-m1;
    av=a2-a1;
    am=(av*12)+mv;
    printf("%d\n",am);
}
/*criei 3 variaveis 2 para os valores da conta e 1 para o resultado apos receber os valores do scanf
realizei a equacao devolvi o resultado e utilizei %.3 para reduzir a quantidade de numeros apos a ,*/
#include <stdio.h>
int main(){
    float n1,n2,dv;
    printf("digite 2 numeros");
    scanf("%f %f",&n1,&n2);
    dv= n1/n2;
    printf("%.3f",dv);
}
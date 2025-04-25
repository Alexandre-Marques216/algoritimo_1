/*criei as variaveis para as dimensoes do objeto e recebi os valores utilizando scanf
depois disso retornei os falores utilizando %.2f para reduzir o numeros de casas apos a virgula*/
#include <stdio.h>
int main(){
    float x,y,z;
    printf("digite as 3 dimensões de um objeto em metros\n");
    scanf("%f %f %f",&x,&y,&z);
    printf("x:%.2fm\ny:%.2fm\nz:%.2fm\n",x,y,z);
}
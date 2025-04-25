#include <stdio.h>
int main(){
    float r1,r2,res;
    printf("digite 2 valores");
    scanf("%f %f",&r1,&r2);
    res=(r1*r2)/(r1+r2);
    printf("a resistencia equivalente é igual a %f\n",res);
}
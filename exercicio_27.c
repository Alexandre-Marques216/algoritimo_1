/*criei uma variavel para receber um valor real e utilizei scanf para receber o valor
depois retornei o valor utilizando printf e utilizei %.0f para remover as casas apos a virgula e transformar o numero em um numero inteiro*/
#include <stdio.h>
int main(){
    float n1;
    printf("digite uma valor real");
    scanf("%f",&n1);
    printf("%.0f",n1);
}
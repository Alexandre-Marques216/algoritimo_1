/*criei 3 variaveis para os valores necessarios e outra para o resultado
apos isso utilizei o scanf para receber os valores e montei a equacao de uma media aritimetica simples com 3 valores
retornei o resultado utilizando printf e utilizei %.2f para reduzir as casas apos a virgula*/
#include <stdio.h>
int main(){
    float n1,n2,n3,media;
    printf("digite 3 numeros inteiros");
    scanf("%f %f %f",&n1,&n2,&n3);
    media = (n1+n2+n3)/3;
    printf("a media foi:%.2f\n",media);
}
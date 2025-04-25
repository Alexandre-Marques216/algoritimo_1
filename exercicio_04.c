/*criei tres variaveis e utilizei uma delas como contador de anos bissextos
apos receber os valores criei um loop for a partir do ano 1 ate que chegace ao ano 2
criei uma equacao para confirmar se cada ano era bisexto ou nao e utilizei o print para devolver o resultado*/
#include <stdio.h>
int main(){
    int ano1,ano2,contador;
    contador=0;
    printf("digite um ano");
    scanf("%d",&ano1);
    printf("digite outro ano maior");
    scanf("%d",&ano2);
    for(int i=ano1;i<=ano2;i=i+1){
        if ((i%4==0) || (i%400==0 && i%100==00))
        contador=contador+1;
    }
    printf("%d\n",contador);
}
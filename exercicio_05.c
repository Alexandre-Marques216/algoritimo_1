/*acidionei a biblioteca <math.h> para utilizar a funcao sqrt que realiza a raiz quadrada de um valor dado
criei 6 variaveis sendo x, y, e z utilizadas para os valores da equação d para representar o delta e x1 e x2 para receber os resultados
apos calcular o valor de delta criei um if para confirmar se os valores dados possuem raizes reais
criei outro if para caso a equacao for possivel e realizei a equacao e devolvi os resultados utilizando printf */
#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z,x1,x2,d;
    printf("digite 3 valores inteiros\n");
    scanf("%d %d %d",&x,&y,&z);
    d = (y*y)-((4*x)*z);
    if (0>d){
        printf("os valores nao possuem raizes reais");
    }
        if(0<d){
        x1=(-y + sqrt(d))/(2 * x);
        x2=(-y-sqrt(d))/(2 * x);
        printf("x1:%d\nx2:%d\n",x1,x2);
        }
}
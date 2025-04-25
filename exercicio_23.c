/*criei 4 variaveis x1 e x2 sao os numeros iniciais da sequencia add calcula as somas dos valores e rep calcula a quantidade de numeros na sequencia
defini os 2 valores inicias e criei um scanf para definir a quantidade de numeros da sequencia
criei uma loop for que se repete ate que i seja igual o numero desejado
dentro do loop criei um printf para devolver o valor sa soma em cada rotacao do loop ate seu fim*/
#include <stdio.h>
int main(){
    int x1,x2,add,rep;
    x1= 0;
    x2=1;
    printf("Digite a quantidade de numeros desejadad\n ");
    scanf("%d", &rep);
    for(int i=0;i<=rep;i=i+1){
        add = x1 + x2;
        x1 = x2;
        x2 = add;
        printf("%d,", add);
    }
}
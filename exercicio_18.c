/*criei uma variavel para registrar uma letra e utilizei o scanf para receber um caracter
criei um if para quando a letra o fosse apertada ele reponderia com a letra e
um else que para quando o a letra for diferente de o ele retorna a tecla pessionada  */
#include <stdio.h>
int main(){
    char letra1;
    printf("digite uma letra");
    scanf("%c",&letra1);
    if (letra1 == 'o'){
        printf("e\n");
    }else{
        printf("%c",letra1);
    }
}
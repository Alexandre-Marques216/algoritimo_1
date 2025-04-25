/*criei uma string com o limite de 12 carcateres e enviei um printf e scanf para receber o texto escrito
entao devolvi o texto atravez do ultimo printf*/
#include <stdio.h>
int main(){
    char letras[12];
    printf("digite algo com no maximo 12 letras\n");
    scanf("%s",&letras[0]);
    printf("%s\n",letras);
}



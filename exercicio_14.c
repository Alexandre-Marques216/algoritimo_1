/*criei as variavies requisitadas e utilizei o scanf para receber os valores
depois retornei os valores obtidos atraves de outro printf*/
#include <stdio.h>
int main(){
    char c1,c2,c3,c4,c5;
    int n1,n2;
    printf("digite 5 caracteres\n");
    scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);
    printf("digite 2 numeros inteiros\n");
    scanf("%d %d",&n1,&n2);
    printf("caracter1:%c\ncaracter2:%c\ncaracter3:%c\ncaracter4:%c\ncaracter5:%c\nnumero1:%d\nnumero2:%d\n",c1,c2,c3,c4,c5,n1,n2);
}
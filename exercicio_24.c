/*nao sei porque nao esta funcionando*/
#include <stdio.h>
int main(){
    int idade;
    char nome[32],genero[9],def[4],naci[100];
    printf("digite tudo em minusculo\n");
    printf("digite seu primeiro nome\n");
    scanf("%s",&nome[0]);
    printf("digite sua idade em numeros\n");
    scanf("%d",&idade);
    printf("digite sua nacionalidade\n");
    scanf("%s",&naci[0]);
    printf("voce possui deficiencia (sim/nao)\n");
    scanf("%s",&def[0]);
    printf("digite o seu genero (masculino/feminino)\n");
    scanf("%s",&genero[0]);
        if((naci=="brasileiro") && (def=="nao") && (genero=="masculino") && (idade>17)){
            printf("%s voce esta apto para o alistamento obrigatorio\n",nome);
            return 0;
            }else{
            printf("%s voce não esta apto para o alistamento obrigatorio\n",nome);
            }
}
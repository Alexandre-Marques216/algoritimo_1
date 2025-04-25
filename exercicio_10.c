/*crei duas variaveis sendo uma para cada lista então apos receber o valor criei um if para cada item da lista informando o item e um if caso o valor nao esteja na lista
criei um segundo if na mesma forma para a lista 2 e retornei os itens selecionados com printf*/
#include <stdio.h>
int main(){
    int v1,v2;
    printf("1.hamburger\n2.cachorro quente\n3.pastel\n4.queijo quente\n5.bauru\n");
    scanf("%d",&v1);
    printf("1.coca cola\n2.sprite\n3.suco\n4.agua\n5.fanta");
    scanf("%d",&v2);
    if (v1<=0){
        printf("valor invalido");
    }
        if (v1==1){
            printf("voce escolheu hamburger\n");
        }
            if (v1==2){
                printf("voce escolheu cachorro quente\n");
            }
                if (v1==3){
                    printf ("voce escolheu pastel\n");
                }
                    if (v1==4){
                        printf("voce escolheu queijo quente\n");
                    }
                        if (v1==5){
                            printf("voce escolheu bauru\n");
                        }
                            if(v1>=6){
                                printf("valor invalido");
                            }
    if (v2<=0){
        printf("valor invalido");
    }
        if (v2==1){
            printf("voce escolheu coca cola\n");
        }
            if (v2==2){
                printf("voce escolheu sprite\n");
            }
                if (v2==3){
                    printf("voce escolheu suco\n");
                }
                    if (v2==4){
                        printf("voce escolheu agua\n");
                    }
                        if (v2==5){
                            printf("voce escolheu fanta\n");
                        }
                            if(v2>=6){
                                printf("valor invalido");
                            }
}
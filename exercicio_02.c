/*crie uma variavel para altura e uma pro genero
então criei 3 ifs um para acima da media,um para abaixo da media e um para a media
no mesmo if coloquei um ou(||) para diferenciar entre o genero masculino e feminino e comparei com as informacoes recebidas pelo usuario*/
#include <stdio.h>
int main ()
{
    int alt;
    char gen;
    printf("digite a inicial do seu genero");
    scanf("%c",&gen);
    printf("digite sua altura em cm");
    scanf("%d",&alt);
    if ((alt>175 && gen=='m') || (alt>162 && gen=='f')){
        printf("acima da media\n");
    }
        if ((alt<175 && gen=='m') || (alt<162 && gen=='f')){
            printf("abaixo da media\n");
        }
                if ((alt==162 && gen=='f') || (alt==175 && gen=='m')){
                    printf(" na media\n");
                }
    else{
        printf("comando invalido");
    }
                    
}
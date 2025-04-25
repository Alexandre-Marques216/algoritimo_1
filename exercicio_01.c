/*criei 3 as variaveis x, y, e z representando os tres lados do triangulo
utilizei o if para verificar se os valores sao um possivel triangulo utilizando a condição de existencia de um triangulo
caso a condicao nao seja atendida utilizei o else para informar que nao e um possivel triangulo e acabar o codigo
apos isso criei mais 3 ifs um para cada tipo de triangulo com suas respectivas formulas*/
#include <stdio.h>
int main()
{
    float x,y,z;
    printf("digite os valores do triangulo");
    scanf("%f %f %f",&x,&y,&z);
    if (x+y>z && x+z>y && z+y>x && x>0 && y>0 && z>0)
    {
        printf("é um triangulo ");
    }
    else
    {
        printf("não é um possivel triangulo\n");
        return 0;
    }
        if (x==y && y==z)
        {
            printf("equilátero\n");
        }
            if (x==y && y!=z || x==z && z!=y || y==z && z!=x )
            {
                printf("issosceles\n");   
            }
                if (x!=y && y!=z && z!=x)
                {
                    printf("escaleno\n");
                }
    return 0;
}
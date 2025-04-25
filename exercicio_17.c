/* utilizei a biblioteca <stdlib.h> para adicionar a funcao qsort ao algoritimo e declarei comp para realizar a comparacao entre dois valores da lista
criei uma lista com 5 numeros e recebi os valores utilizando scanf
apos isso utilizei qsort para mudar a ordem dos numeros dentro da lista 
e utilizei um loop for para retornar a lista em ordem crescente */
#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numeros[5];
    printf("digite 5 numeros");
    scanf("%d %d %d %d %d",&numeros[0],&numeros[1],&numeros[2],&numeros[3],&numeros[4]);
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    qsort(numeros, tamanho, sizeof(numeros[0]), comp);
    printf("Lista crescente: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ",numeros[i]);
    }
    printf("\n");
    return 0;
}
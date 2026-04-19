#include <stdio.h>
#include <stdlib.h>

int main() {
    int *mochila=(int *)malloc(3*sizeof(int));
    printf("Digite os 3 primeiros itens encontrados e amrazenados na mochila:\n");
    scanf("%d %d %d", &mochila[0], &mochila[1], &mochila[2]);
    printf("Itens na mochila:\n1.%d\n2.%d\n3.%d\n", mochila[0], mochila[1], mochila[2]);
    mochila=(int *)realloc(mochila, 6*sizeof(int));
    printf("Digite os 3 novos itens encontrados:\n");
    scanf("%d %d %d", &mochila[3], &mochila[4], &mochila[5]);
    printf("Total de itens na mochila:\n");
    for(int i=0; i<6; i++) {
        printf("%d. %d\n", i+1, mochila[i]);
    }
    free(mochila);
    return 0;
}
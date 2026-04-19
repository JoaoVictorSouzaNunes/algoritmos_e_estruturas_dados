#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Digite o numero de linhas e colunas, respectivamente, do seu mapa:\n");
    scanf("%d %d", &n, &m);
    int **mapa=(int **)malloc(n*sizeof(int *));
    int i, j;
    for(i=0; i<n; i++) {
        mapa[i]=(int *)malloc(m*sizeof(int));
    }
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            printf("Indique o valor do seu bloco(0, 1 ou 2): ");
            scanf("%d", &mapa[i][j]);
        }
    }
    int x=0;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(mapa[i][j]==1) {
                x++;
            }
        }
    }
    printf("O mapa possui %d blocos de tijolo.", x);
    for(i=0; i<n; i++) {
        free(mapa[i]);
    }
    ;
    return 0;
}
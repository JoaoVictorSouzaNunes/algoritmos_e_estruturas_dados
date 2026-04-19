#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite a quantidade de inimigos da fase: ");
    scanf("%d", &n);
    int *status_inimigo;
    status_inimigo=(int *)calloc(n, sizeof(int));
    int i;
    for(i=0; i<n; i++) {
        printf("Inimigo %d: Inativo (%d)\n", i+1, status_inimigo[i]);
    }
    for(i=0; i<n; i++) {
        status_inimigo[i]=1;
    }
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Inimigo %d: Ativo (%d)\n", i+1, status_inimigo[i]);
    }
    free(status_inimigo);
    return 0;
}
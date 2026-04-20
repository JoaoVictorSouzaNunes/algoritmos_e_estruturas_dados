#include <stdio.h>

int main() {
    int n, i, j;
    printf("Quant. de Jogadores: ");
    scanf("%d", &n);
    int pontuacoes[n];
    for(i=0; i<n; i++) {
        scanf("%d", &pontuacoes[i]);
    }
    int imenor, aux;
    for(i=0; i<n-1; i++) {
        imenor=i;
        for(j=i+1; j<n; j++) {
            if(pontuacoes[imenor]>pontuacoes[j]) {
                imenor=j;
            }
        }
        aux=pontuacoes[i];
        pontuacoes[i]=pontuacoes[imenor];
        pontuacoes[imenor]=aux;
    }
    for(i=0; i<n; i++) {
        printf("%d ", pontuacoes[i]);
    }
    return 0;
}
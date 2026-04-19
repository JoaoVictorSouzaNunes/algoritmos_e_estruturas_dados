#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int posicao_x, posicao_y, valor;
}Moeda;

int main() {
    int n, i, total_pontos;
    printf("Quantas moedas voce quer cadastrar? ");
    scanf("%d", &n);
    Moeda *moedas=(Moeda*)malloc(n*sizeof(Moeda));
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &moedas[i].posicao_x, &moedas[i].posicao_y, &moedas[i].valor);
    }
    for(i=0; i<n; i++) {
        total_pontos+=moedas[i].valor;
    }
    printf("Pontuacao maxima do nivel: %d", total_pontos);
    free(moedas);
    return 0;
}
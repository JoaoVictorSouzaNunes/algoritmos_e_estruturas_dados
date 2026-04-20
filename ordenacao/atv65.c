#include <stdio.h>

typedef struct {
    char nome[50];
    int pontuacao;
}Jogador;

int main() {
    int n, i, j;
    Jogador x;
    scanf("%d", &n);
    Jogador jogadores[n];
    for(i=0; i<n; i++) {
        scanf("%s %d", jogadores[i].nome, &jogadores[i].pontuacao);
    }
    for(i=1; i<n; i++) {
        x=jogadores[i];
        for(j=i-1; j>=0&&x.pontuacao<jogadores[j].pontuacao; j--) {
            jogadores[j+1]=jogadores[j];
        }
        jogadores[j+1]=x;
    }
    printf("Pontuacao ordenada:\n");
    for(i=0; i<n; i++) {
        printf("%d %s\n", jogadores[i].pontuacao, jogadores[i].nome);
    }
    return 0;
}
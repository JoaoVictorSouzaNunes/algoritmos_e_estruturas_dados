#include <stdio.h>

typedef struct {
    int id;
    int pontuacao;
} Jogador;

void bubbleSort(Jogador v[], int n) {
    int troca;
    Jogador aux;
    for(int i = 0; i < n - 1; i++) {
        troca=0;
        for(int j = 0; j < n - 1 - i; j++) {
            if(v[j].pontuacao < v[j + 1].pontuacao) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                troca=1;
            }
        }
        if(!troca) break;
    }
}

int main() {

    int n;
    scanf("%d", &n);

    Jogador jogadores[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &jogadores[i].id, &jogadores[i].pontuacao);
    }

    bubbleSort(jogadores, n);

    for(int i = 0; i < n; i++) {
        printf("%d %d\n", jogadores[i].id, jogadores[i].pontuacao);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int kills;
}Jogador;

void selectionSort(int n, Jogador *jogadores) {
    int imaior;
    Jogador aux;
    for(int i=0; i<n-1; i++) {
        imaior=i;
        for(int j=i+1; j<n; j++) {
            if(jogadores[imaior].kills<jogadores[j].kills) {
                imaior=j;
            }
        }
        aux=jogadores[i];
        jogadores[i]=jogadores[imaior];
        jogadores[imaior]=aux;
    }
}

int main() {
    int n, i;
    Jogador *jogadores;
    printf("Numero de jogadores na partida: ");
    scanf("%d", &n);
    jogadores=(Jogador *)malloc(n*sizeof(Jogador));
    for(i=0; i<n; i++) {
        scanf("%s %d", jogadores[i].nome, &jogadores[i].kills);
    }
    selectionSort(n, jogadores);
    printf("\n=========VETOR ORDENADO=========\n");
    for(i=0; i<n; i++) {
        printf("%s: %d\n", jogadores[i].nome, jogadores[i].kills);
    }
    free(jogadores);
    return 0;
}
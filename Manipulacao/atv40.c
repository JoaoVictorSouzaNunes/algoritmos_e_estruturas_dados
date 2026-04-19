#include <stdio.h>

typedef struct {
    char nome[50];
    int pontuacao;
}JOGADOR;

int main() {
    int n, i;
    scanf("%d", &n);
    JOGADOR jogadores[n];
    JOGADOR maior_jogador;
    for(i=0; i<n; i++) {
        scanf("%50s %d", jogadores[i].nome, &jogadores[i].pontuacao);
    }
    maior_jogador=jogadores[0];
    for(i=1; i<n; i++) {
        if(jogadores[i].pontuacao>maior_jogador.pontuacao) {
            maior_jogador=jogadores[i];
        }
    }
    FILE *file=fopen("../highscore.txt", "w"); //se a compilação/execução for feita diretamente no terminal, pode usar apenas um ponto  (.) pois o executável é gerado no mesmo diretório. No caso de uma compilação automática o executável é adicionado a outro diretório 
    fprintf(file, "Nome: %s, Pontuacao: %d", maior_jogador.nome, maior_jogador.pontuacao);
    fclose(file);
    return 0;
}
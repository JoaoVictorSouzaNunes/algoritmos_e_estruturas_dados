#include <stdio.h>

typedef struct {
    int vida;
    int pontuacao;
}Atributos;

typedef struct {
    char Nome[50];
    Atributos stats;
}Personagem;

int main() {
    Personagem jogador;
    printf("Digite o nome do seu personagem:\n");
    scanf("%[^\n]50s", jogador.Nome);
    jogador.stats.vida=100;
    jogador.stats.pontuacao=0;
    printf("Status Inicial -> Nome: %s | Vida: %d | Pontuacao: %d\n", jogador.Nome, jogador.stats.vida, jogador.stats.pontuacao);
    jogador.stats.pontuacao+=10;
    jogador.stats.vida-=25;
    printf("Status Final -> Nome: %s | Vida: %d | Pontuacao: %d", jogador.Nome, jogador.stats.vida, jogador.stats.pontuacao);

}
#include <stdio.h>

typedef struct {
    int posX, posY, moedas;
}Personagem;

Personagem atualizarPersonagem(Personagem p) {
    p.posX=10;
    p.posY=5;
    p.moedas=1;
    return p;
}

int main() {
    Personagem jogador={0, 0, 0};
    printf("Posicao inicial: (%d, %d) - Moedas: %d\n", jogador.posX, jogador.posY, jogador.moedas);
    jogador=atualizarPersonagem(jogador);
    printf( "Posicao atualizada: (%d, %d) - Moedas: %d", jogador.posX, jogador.posY, jogador.moedas);
    return 0;
}
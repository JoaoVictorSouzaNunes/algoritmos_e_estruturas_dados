#include <stdio.h>

typedef struct {
    int x, y;
}Posicao;

void mover_personagem(Posicao *ptr, int movimento_x, int movimento_y) {
    (*ptr).x+=movimento_x;
    (*ptr).y+=movimento_y;
}

int main() {
    Posicao posicao_jogador={0, 0};
    Posicao *ponteiro_posicao=&posicao_jogador;
    printf("Posicao inicial do jogador: X=%d, Y=%d\n", posicao_jogador.x, posicao_jogador.y);
    mover_personagem(ponteiro_posicao, 10, 5);
    printf("Posicao final do jogador: X=%d, Y=%d", posicao_jogador.x, posicao_jogador.y);
    return 0;
}
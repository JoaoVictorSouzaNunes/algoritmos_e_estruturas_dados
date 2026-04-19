#include <stdio.h>

void aplicar_powerup_pontuacao_dupla(int *pa) {
    *pa=2* *pa;
}

int main() {
    int pontuacao_jogador=1500;
    printf("pontuacao antes do power-up: %d\n", pontuacao_jogador);
    int *ponteiro_pontuacao=&pontuacao_jogador;
    aplicar_powerup_pontuacao_dupla(ponteiro_pontuacao);
    printf("Pontuacao apos o power-up: %d", pontuacao_jogador);
    return 0;
}
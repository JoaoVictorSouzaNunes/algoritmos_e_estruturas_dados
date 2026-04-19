#include <stdio.h>

struct Jogador {
    float pos_x;
    int pontuacao;
    int tem_pulo_duplo;
};

int main() {
    struct Jogador heroi;
    heroi.pos_x=50;
    heroi.pontuacao=0;
    heroi.tem_pulo_duplo=0;
    printf("Inicio da fase! Posicao X: %.1f, Pontos: %d, Pulo duplo: ", heroi.pos_x, heroi.pontuacao);
    if(heroi.tem_pulo_duplo==0) {
        printf("Nao");
    } else {
        printf("Sim");
    }
    printf("\n");
    heroi.pontuacao+=10;
    heroi.tem_pulo_duplo=1;
    printf("Itens coletados! Posicao X: %.1f, Pontos: %d, Pulo duplo: ", heroi.pos_x, heroi.pontuacao);
    if(heroi.tem_pulo_duplo==0) {
        printf("Nao");
    } else {
        printf("Sim");
    }
    return 0;
}
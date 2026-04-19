#include <stdio.h>

int main() {
    float coordenada_x;
    float *ponteiro_x=&coordenada_x;
    scanf("%f", ponteiro_x);
    printf("Posicao do portal no eixo X: %.2f\n", *ponteiro_x);
    printf("Endereco do portal para teletransporte: %p", ponteiro_x);
    return 0;
}
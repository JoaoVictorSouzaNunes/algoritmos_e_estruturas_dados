#include <stdio.h>

enum EstadoPersonagem {PARADO, CORRENDO, PULANDO};

int main() {
    enum EstadoPersonagem estado_atual;
    printf("Digite um inteiro para representar o estado do personagem (0 para PARADO, 1 para CORRENDO, ou 2 para PULANDO):\n");
    scanf("%u", &estado_atual);
    if(estado_atual==PARADO) {
        printf("O personagem está parado.");
    } else if(estado_atual==CORRENDO) {
        printf("O personagem está correndo!");
    } else if(estado_atual==PULANDO) {
        printf("O personagem está pulando no ar!");
    } else {
        printf("Estado invalido!");
    }
    return 0;
}
#include <stdio.h>

typedef struct {
    char nome[50];
    int valor_pontos;
}ItemColetavel;

int main() {
    ItemColetavel inventario[3];
    for(int i=0; i<3; i++) {
        scanf("%50s %d", inventario[i].nome, &inventario[i].valor_pontos);
    }
    ItemColetavel maior=inventario[0];
    for(int i=1; i<3; i++) {
        if(inventario[i].valor_pontos>maior.valor_pontos) {
            maior=inventario[i];
        }
    }
    printf("O item mais valioso coletado foi: %s", maior.nome);
    return 0;
}
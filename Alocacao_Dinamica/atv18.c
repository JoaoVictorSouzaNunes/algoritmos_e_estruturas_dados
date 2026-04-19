#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vida_inimigo;
    vida_inimigo=(int *)malloc(sizeof(int));
    if(vida_inimigo==NULL) {
        printf("Não foi possivel alocar espaco corretamente!");
        return 1;
    }
    *vida_inimigo=80;
    printf("Um novo inimigo apareceu com 80 de vida!\n");
    *vida_inimigo-=35;
    printf("O jogador atacou! Vida restante do inimigo: %d", *vida_inimigo);
    return 0;
}
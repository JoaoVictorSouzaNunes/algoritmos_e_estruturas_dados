#include <stdio.h>

typedef struct {
    char nome[50];
    int nivel;
    float vida, mana;
}Personagem;

void menu() {
    printf("=================================== MENU ===================================\n");
    printf("1 - Criar Novo Personagem\n");
    printf("2 - Sair\n");
    printf("============================================================================\n");
}

int main() {
    int op;
    Personagem personagem;
    FILE *file=fopen("../savegame.sav", "wb");
    menu();
    scanf("%d", &op);
    while(op!=2) {
        if(op==1) {
            scanf("%49s %d %f %f", personagem.nome, &personagem.nivel, &personagem.vida, &personagem.mana);
            fwrite(&personagem, sizeof(Personagem), 1, file);
        }
        printf("\n");
        menu();
        scanf("%d", &op);
    }
    fclose(file);
    return 0;
}
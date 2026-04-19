#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char inventario[5][20];
    printf("Digite os itens no inventário:\n");
    scanf("%s %s %s %s %s", inventario[0], inventario[1], inventario[2], inventario[3], inventario[4]);
    char item[20];
    printf("Digite o nome do item necessário para abrir a porta: ");
    scanf("%20s", item);
    int true=0;
    for(int i=0; i<5; i++) {
        if(strcmp(inventario[i], item)==0) {
            true=1;
            break;
        }
    }
    if(true) {
        printf("Porta aberta!");
    } else {
        printf("Você não tem o item necessário.");
    }
    return 0;
}
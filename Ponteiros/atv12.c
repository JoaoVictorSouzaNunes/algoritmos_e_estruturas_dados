#include <stdio.h>
#include <string.h>

int main() {
    char nome_jogador[50];
    printf("Digite o nome do seu personagem:\n");
    scanf("%[^\n]s", nome_jogador);
    if(strlen(nome_jogador)<=15) {
        printf("Nome valido! bem-vindo ao jogo, %s!", nome_jogador);
    } else {
        printf("Nome muito grande! por favor, escolha um nome com ate 15 caracteres");
    }
    return 0;
}
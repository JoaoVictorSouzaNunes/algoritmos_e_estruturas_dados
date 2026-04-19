#include <stdio.h>
#include <locale.h>

struct ItemColetavel {
    int valor_ponto;
    float peso;
};

int main() {
    setlocale(LC_ALL, "portuguese");
    struct ItemColetavel moeda_bronze={10, 0.5};
    struct ItemColetavel moeda_prata={50, 0.7};
    struct ItemColetavel moeda_ouro={100, 0.1};
    int pontuacao_jogador=0;
    pontuacao_jogador+=moeda_ouro.valor_ponto;
    printf(" Moeda de ouro coletada! Pontuação atual: %d", pontuacao_jogador);

    return 0;
}
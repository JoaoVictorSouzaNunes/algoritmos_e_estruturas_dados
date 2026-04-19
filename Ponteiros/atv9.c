#include <stdio.h>

int main() {
    int moedas_coletadas[5]={10, 50, 20, 5, 100};
    int pontuacao_total=0;
    int *ponteiro_moedas=moedas_coletadas;
    while(ponteiro_moedas<=&moedas_coletadas[4]) {
        pontuacao_total+=*(ponteiro_moedas);
        ponteiro_moedas++;
    }
    printf("Pontuaçao total do nivel: %d", pontuacao_total);
    return 0;
}
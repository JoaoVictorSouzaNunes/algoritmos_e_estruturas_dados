#include <stdio.h>

int main() {
    int pontuacao=0;
    int *ponteiro_pontuacao;
    ponteiro_pontuacao=&pontuacao;
    printf("Pontuacao inicial: %d\n", pontuacao);
    int i;
    for(i=0; i<3; i++) {
        *ponteiro_pontuacao+=10;
    }
    printf("Pontuacao final apos coletar %d moedas: %d", i, pontuacao);
    return 0;
}
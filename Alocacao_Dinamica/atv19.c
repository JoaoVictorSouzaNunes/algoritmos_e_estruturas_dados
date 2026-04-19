#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ponteiro_altura_salto_duplo=NULL;
    printf("Jogador ainda nao possui o Salto Duplo.\n");
    ponteiro_altura_salto_duplo=(float *)malloc(sizeof(float));
    if(ponteiro_altura_salto_duplo) {
        printf("Alocacao bem sucedida!\n");
        *ponteiro_altura_salto_duplo=15.5;
        printf("Pena Dourada coletada! Altura do Salto Duplo: %.2f", *ponteiro_altura_salto_duplo);
        free(ponteiro_altura_salto_duplo);
        //em um jogo real, essa linha é usada para liberar a memória quando o power-up não é mais necessário.
    }
    return 0;
}
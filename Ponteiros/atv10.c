#include <stdio.h>

int main() {
    int sala_1[3]={10, 20, 5};
    int sala_2[2]={50, 100};
    int sala_3[4]={5, 5, 5, 10};
    int bases[3]={3, 2, 4};
    int *ponteiro_salas[3];
    ponteiro_salas[0]=sala_1;
    ponteiro_salas[1]=sala_2;
    ponteiro_salas[2]=sala_3;
    for(int i=0; i<3; i++) {
        printf("Moedas na Sala %d: ", i+1);
        for(int j=0; j<*(bases+i); j++) {
            printf("%d ", *(*(ponteiro_salas+i)+j));
        }
        printf("\n");
    }
    return 0;
}
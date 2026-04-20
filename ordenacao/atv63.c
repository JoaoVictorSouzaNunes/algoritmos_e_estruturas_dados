#include <stdio.h>

int main() {
    int placar[6]={120, 125, 130, 142, 150};
    int novo_tempo, i;
    printf("Novo tempo: ");
    scanf("%d", &novo_tempo);
    for(i=4; i>=0&&novo_tempo<placar[i]; i--) {
        placar[i+1]=placar[i];
    }
    placar[i+1]=novo_tempo;
    printf("PLACAR\n");
    for(i=0; i<5; i++) {
        printf("%d\n", placar[i]);
    }
    return 0;
}
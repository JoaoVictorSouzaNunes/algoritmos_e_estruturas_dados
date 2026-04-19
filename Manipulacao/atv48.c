#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int vida;
    int ataque;
}Campeao;

int main() {
    setlocale(LC_ALL, "portuguese");
    int i;
    FILE *file=fopen("squad.dat", "rb");
    Campeao campeoes[3], tanque;
    for(i=0; i<3; i++) {
        scanf("%49s %d %d", campeoes[i].nome, &campeoes[i].vida, &campeoes[i].ataque);
    }
    fread(campeoes, sizeof(Campeao), 3, file);
    fclose(file);
    tanque=campeoes[0];
    for(i=1; i<3; i++) {
        if(campeoes[i].vida>tanque.vida) {
            tanque=campeoes[i];
        }
    }
    printf("%s : Tanque do esquadr�o.", tanque.nome);
    return 0;
}
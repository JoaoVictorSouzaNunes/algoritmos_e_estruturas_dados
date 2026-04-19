#include <stdio.h>

typedef struct {
    char nome[50];
    int nivel;
    int highScore;
}PlayerProfile;

int main() {
    FILE *file=fopen("../profiles.dat", "rb");
    PlayerProfile playerprofile;
    while(fread(&playerprofile, sizeof(PlayerProfile), 1, file)) {
        printf("Nome: %s Rank: ", playerprofile.nome);
        if(playerprofile.highScore>10000) {
            printf("Mestre do Jogo");
        } else if(playerprofile.highScore>5000) {
            printf("Veterano");
        } else {
            printf("Aspirante");
        }
        printf("\n");
    }
    fclose(file);
    return 0;
}
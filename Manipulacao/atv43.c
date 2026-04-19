#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int vida;
    int ataque;
}Inimigo;

int main() {
    setlocale(LC_ALL, "portuguese");

    short first=1;
    Inimigo inim, maior_inim;
    FILE *file=fopen("../wave_data.txt", "r");

    if(file==NULL) {
        printf("Nao foi possivel abrir o arquivo!\n");
        exit(1);
    }
    while(fscanf(file, "%s %d %d", inim.nome, &inim.vida, &inim.ataque)!=EOF) {
        if(first) {
            maior_inim=inim;
            first=0;
        }
        if(inim.ataque>maior_inim.ataque) {
            maior_inim=inim;
        }
    }
    fclose(file);
    printf("Maior Ameaça: %s, Vida: %d, Ataque: %d\n", maior_inim.nome, maior_inim.vida, maior_inim.ataque);
    return 0;
}
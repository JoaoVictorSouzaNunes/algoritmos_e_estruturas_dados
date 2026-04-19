#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int vida;
    int ataque;
}Unidade;

int main() {
    int n, i;
    Unidade *unidades, maior_unidade;
    FILE *file;
    printf("Quantas unidades deseja incluir no esquadrao? ");
    scanf("%d", &n);
    unidades=(Unidade *)malloc(sizeof(Unidade)*n);
    for(i=0; i<n; i++) {
        scanf("%49s %d %d", unidades[i].nome, &unidades[i].vida, &unidades[i].ataque);
    }
    file=fopen("../squad.dat", "wb");
    fwrite(unidades, sizeof(unidades), n, file);
    fclose(file);
    maior_unidade=unidades[0];
    for(i=1; i<n; i++) {
        if(unidades[i].ataque>maior_unidade.ataque) {
            maior_unidade=unidades[i];
        }
    }
    printf("%s", maior_unidade.nome);
    free(unidades);
    return 0;
}
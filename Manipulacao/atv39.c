#include <stdio.h>

typedef struct {
    char nome[20];
    float HP;
    float ATK;
}INIMIGOS;

int main() {
    INIMIGOS inimigos[3];
    FILE *file=fopen("../inimigos.txt", "r"); //usa-se o diretório pai, pois na configuração de execução padrão do IDE (VScode) o arquivo executavel (.exe) é criado como uma subpasta/subdiretório do local onde está o arquivo-fonte (.c), denominado de "output", e esse passa a ser o diretório atual do terminal
    int i;
    float nivel_ameaca;

    for(i=0; i<3; i++) {
        fscanf(file, "%s %f %f", inimigos[i].nome, &inimigos[i].HP, &inimigos[i].ATK);
    }
    for(i=0; i<3; i++) {
        nivel_ameaca=inimigos[i].HP+inimigos[i].ATK;
        if(nivel_ameaca>=200) {
            printf("%s %.2f\n", inimigos[i].nome, nivel_ameaca);
        }
    }
    fclose(file);
    return 0;
}
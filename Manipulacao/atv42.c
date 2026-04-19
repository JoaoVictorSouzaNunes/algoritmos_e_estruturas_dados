#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int resolucao_x;
    int resolucao_y;
    float volume_som;
}Configuracao;

int main() {
    Configuracao config;
    FILE *file=fopen("../config.txt", "r");
    if(file==NULL) {
        printf("Erro: Arquivo config.txt nao encontrado!\n");
        exit(1);
    }
    fscanf(file, "%d %d %f", &config.resolucao_x, &config.resolucao_y, &config.volume_som);
    printf("Configuracoes carregadas:\nResolucao: %dx%d\nVolume: %.1f\n", config.resolucao_x, config.resolucao_y, config.volume_som);
    fclose(file);
    return 0;
}
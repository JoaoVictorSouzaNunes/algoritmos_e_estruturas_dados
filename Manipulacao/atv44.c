#include <stdio.h>

typedef struct {
    int id;
    int pontos;
}CONQUISTA;

int main() {
    FILE *file=fopen("../player_log.txt", "r+");
    CONQUISTA conquista;
    int n, total=0;
    if(!file) return 1;

    fscanf(file, "%d", &n);
    for(int i=0; i<n; i++) {
        fscanf(file, "%d %d", &conquista.id, &conquista.pontos);
        total+=conquista.pontos;
    }
    printf("%d", total);
    fseek(file, 0, SEEK_CUR);
    fprintf(file, "\n--- SESSION CONCLUDED ---");
    fclose(file);
    return 0;
}
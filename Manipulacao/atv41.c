#include <stdio.h>

void menu() {
    printf("=================================== MENU ===================================\n");
    printf("1 - REGISTRAR NOVO EVENTO\n");
    printf("2 - SAIR\n");
    printf("============================================================================\n");
}

int main() {
    int op;
    char log[100];
    FILE *file=fopen("../game_log.txt", "a");
    do {
        menu();
        scanf("%d", &op);
        if(op==1) {
            scanf("%99s", log);
            fprintf(file, "%s\n", log);
        }
        printf("\n");
    } while(op!=2);
    fclose(file);
    return 0;
}
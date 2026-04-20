#include <stdio.h>

typedef struct {
    int id;
    char nome[10];
    float forca, agilidade, inteligencia;
} Personagem;

void menu() {
    printf("====================================================\n");
    printf("1 - Consultar Personagem\n");
    printf("2 - Sair\n");
    printf("====================================================\n");
}

int buscaLinear(int n, Personagem v[], int x) {
    for(int i=0; i<n; i++) {
        if(v[i].id==x) return i;
    }
    return -1;
}

int main() {
    int n, op, id, p;
    float media;
    printf("Numero de personagens na campanha: ");
    scanf("%d", &n);
    Personagem personagens[n];
    for(int i=0; i<n; i++) {
        scanf("%d %9s %f %f %f", &personagens[i].id, personagens[i].nome, &personagens[i].forca, &personagens[i].agilidade, &personagens[i].inteligencia);
    }
    menu();
    scanf("%d", &op);
    while(op!=2) {
        if(op==1) {
            printf("Digite o ID: ");
            scanf("%d", &id);
            p=buscaLinear(n, personagens, id);
            if(p==-1){
                printf("Personagem nao escontrado!");
            } else {
                media=(personagens[p].forca+personagens[p].agilidade+personagens[p].inteligencia)/3;
                printf("%s: %.2f", personagens[p].nome, media);
            }
        }
        printf("\n");
        menu();
        scanf("%d", &op);
    }
    return 0;
}
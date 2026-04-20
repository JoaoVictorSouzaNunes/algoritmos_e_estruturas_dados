#include <stdio.h>

typedef struct {
    int id;
    char nickname[50];
    int pontos;
}Jogador;

void menu() {
    printf("=============================\n");
    printf("1 - Adicionar reputacao\n");
    printf("2 - Sair\n");
    printf("=============================\n");
}

int buscaBinaria(int n, Jogador v[], int x) {
    int m, i=0;
    int f=n-1;
    while(i<=f) {
        m=(i+f)/2;
        if(v[m].id==x) {
            return m;
        } else if(v[m].id>x) {
            f=m-1;
        } else {
            i=m+1;
        }
    }
    return -1;
}

int main() {
    int n, op, id, p;
    printf("Numeros de jogadores para cadastrar: ");
    scanf("%d", &n);
    Jogador jogadores[n];
    for(int i=0; i<n; i++) {
        scanf("%d %s %d", &jogadores[i].id, jogadores[i].nickname, &jogadores[i].pontos);
    }
    menu();
    scanf("%d", &op);
    while(op!=2) {
        if(op==1) {
            printf("Digite o ID do personagem: ");
            scanf("%d", &id);
            p=buscaBinaria(n, jogadores, id);
            if(p==-1) {
                printf("Jogador com ID %d nao encontrado.\n", id);
            } else {
                jogadores[p].pontos+=100;
                printf("Nickname: %s, Nova Reputacao: %d\n", jogadores[p].nickname, jogadores[p].pontos);
            }
        }
        menu();
        scanf("%d", &op);
    }
    return 0;
}
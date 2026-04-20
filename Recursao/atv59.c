#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    int hp, ataque;
}Monstro;

int buscaBinariaRecursiva(Monstro v[], int i, int f, int x) {
    if(i>f) return -1;
    int m=(i+f)/2;
    if(v[m].id==x) return m;
    if(v[m].id>x) {
        return buscaBinariaRecursiva(v, i, m-1, x);
    } else {
        return buscaBinariaRecursiva(v, m+1, f, x);
    }
}

int main() {
    int n, id, p;
    printf("Numero de monstros: ");
    scanf("%d", &n);
    Monstro catalogo[n];
    for(int i=0; i<n; i++) {
        scanf("%d %s %d %d", &catalogo[i].id, catalogo[i].nome, &catalogo[i].hp, &catalogo[i].ataque);
    }
    scanf("%d", &id);
    while(id!=0) {
        p=buscaBinariaRecursiva(catalogo, 0, n-1, id);
        if(p==-1) {
            printf("Monstro com ID %d nao encontrado.\n", id);
        } else {
            printf("Monstro Encontrado: %s (ID: %d) - HP: %d, Ataque: %d\n", catalogo[p].nome, catalogo[p].id, catalogo[p].hp, catalogo[p].ataque);
        }
        scanf("%d", &id);
    }
    return 0;
}
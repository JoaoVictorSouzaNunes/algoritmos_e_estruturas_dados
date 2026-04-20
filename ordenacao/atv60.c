#include <stdio.h>

typedef struct {
    char nome[50];
    int hp;
}Monstro;

Monstro menor(Monstro v[], int n) {
    Monstro menor=v[0];
    for(int i=1; i<n; i++) {
        if(v[i].hp<menor.hp) {
            menor=v[i];
        }
    }
    return menor;
}

int main() {
    int n;
    scanf("%d", &n);
    Monstro monstros[n], m;
    for(int i=0; i<n; i++) {
        printf("Monstro%d: ", i+1);
        scanf("%s %d", monstros[i].nome, &monstros[i].hp);
    }
    m=menor(monstros, n);
    printf("Alvo prioritario: %s (%d HP)\n", m.nome, m.hp);
}
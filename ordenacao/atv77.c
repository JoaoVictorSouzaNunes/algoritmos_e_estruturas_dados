#include <stdio.h>

typedef struct {
    int id;
    int pontuacao;
} Jogador;

int particao(Jogador v[], int esq, int dir) {
    Jogador aux, pivo = v[dir];
    int i, j = esq - 1;
    for (i = esq; i < dir; i++) {
        if (v[i].pontuacao > pivo.pontuacao) {
            j++;
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    }
    aux = v[j + 1];
    v[j + 1] = v[dir];
    v[dir] = aux;
    return j + 1;
}

void quicksort(Jogador v[], int esq, int dir) {
    if (esq < dir) {
        int p = particao(v, esq, dir);
        quicksort(v, esq, p - 1);
        quicksort(v, p + 1, dir);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Jogador v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &v[i].id, &v[i].pontuacao);
    }

    quicksort(v, 0, n - 1);

    printf("\nVetor Ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", v[i].id, v[i].pontuacao);
    }

    return 0;
}

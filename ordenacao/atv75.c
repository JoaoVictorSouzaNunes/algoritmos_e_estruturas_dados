#include <stdio.h>

int particao(int v[], int esq, int dir) {
    int pivo = v[dir];
    int i, j = esq-1, aux;
    for (i = esq; i < dir; i++) {
        if (v[i] <= pivo) {
            j++;
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
        }
    }
    aux = v[j+1];
    v[j+1] = v[dir];
    v[dir] = aux;
    return j + 1;
}

void quicksort(int v[], int ini, int fim) {
    int p;
    if (ini < fim) {
        p = particao(v, ini, fim);
        quicksort(v, ini, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    quicksort(v, 0, n-1);
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}

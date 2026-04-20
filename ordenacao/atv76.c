#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int particao(int v[], int esq, int dir) {
    srand(time(NULL));
    int pivIndice = esq + rand() % (dir - esq + 1);

    int aux = v[pivIndice];
    v[pivIndice] = v[dir];
    v[dir] = aux;

    int pivo = v[dir];
    int j = esq - 1;

    for (int i = esq; i < dir; i++) {
        if (v[i] <= pivo) {
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

// Quick Sort recursivo
void quicksort(int v[], int inic, int fim) {
    if (inic < fim) {
        int p = particao(v, inic, fim);
        quicksort(v, inic, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    quicksort(v, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}

#include <stdio.h>

typedef struct {
    int posicao;
    char nome[50];
} Piloto;

void intercala(Piloto v[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    Piloto L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = v[inicio + i];

    for (int j = 0; j < n2; j++)
        R[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {
        if (L[i].posicao <= R[j].posicao) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Piloto v[], int inicio, int fim) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        intercala(v, inicio, meio, fim);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Piloto pilotos[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &pilotos[i].posicao, pilotos[i].nome);
    }

    mergeSort(pilotos, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d %s\n", pilotos[i].posicao, pilotos[i].nome);
    }

    return 0;
}

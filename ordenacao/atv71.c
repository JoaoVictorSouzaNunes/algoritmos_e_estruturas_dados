#include <stdio.h>

typedef struct {
    int id;
    int nivel_ameaca;
} Nave;

void marge(int inic, int meio, int fim, Nave v[]) {
    int n1=meio-inic+1;
    int n2=fim-meio;
    int k=inic;

    Nave esq[n1];
    Nave dir[n2];

    int i, j;
    for(i=0; i<n1; i++) {
        esq[i]=v[inic+i];
    }
    for(j=0; j<n2; j++) {
        dir[j]=v[meio+1+j];
    }

    i=0, j=0;
    while(i<n1&&j<n2) {
        if(esq[i].nivel_ameaca<dir[j].nivel_ameaca) {
            v[k++]=esq[i++];
        } else {
            v[k++]=dir[j++];
        }
    }
    while(i<n1) {
        v[k++]=esq[i++];
    }
    while(j<n2) {
        v[k++]=dir[j++];
    }
}

void margeSort(int inicio, int fim, Nave v[]) {
    int m;
    if(inicio<fim) {
        m=(inicio+fim)/2;
        margeSort(inicio, m, v);
        margeSort(m+1, fim, v);
        marge(inicio, m, fim, v);
    }
}

int main() {
    int i, n;
    printf("Quant. de naves inimigas: ");
    scanf("%d", &n);
    Nave inimigos[n];
    for(i=0; i<n; i++) {
        scanf("%d %d", &inimigos[i].id, &inimigos[i].nivel_ameaca);
    }
    margeSort(0, n-1, inimigos);
    for(i=0; i<n; i++) {
        printf("%d ", inimigos[i].id);
    }
    return 0;;
}
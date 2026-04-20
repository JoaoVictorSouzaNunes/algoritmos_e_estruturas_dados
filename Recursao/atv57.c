#include <stdio.h>

int carregados(int i, int n, int v[]) {
    if(i==n) return 0;
    if(v[i]>0) return 1+carregados(i+1, n, v);
    return carregados(i+1, n, v);
}

int main() {
    int n, feiticos;
    scanf("%d", &n);
    int cristais[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &cristais[i]);
    }
    feiticos=carregados(0, n, cristais);
    printf("Cristais carregados: %d", feiticos);
    return 0;
}
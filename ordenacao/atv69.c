#include <stdio.h>

void intercalar(int n, int v1[], int m, int v2[], int r[]) {
    int i=0, j=0, k=0;
    while(i<n&&j<m) {
        if(v1[i]<v2[j]) {
            r[k]=v1[i];
            i++;
        } else {
            r[k]=v2[j];
            j++;
        }
        k++;
    }
    while(i<n) {
        r[k]=v1[i];
        i++;
        k++;
    }
    while(j<m) {
        r[k]=v2[j];
        j++;
        k++;
    }
}

int main() {
    int n, m, i;
    printf("Portal Alfa: ");
    scanf("%d", &n);
    int onda1[n];
    for(i=0; i<n; i++) {
        scanf("%d", &onda1[i]);
    }
    printf("Portal Beta: ");
    scanf("%d", &m);
    int onda2[m];
    for(i=0; i<m; i++) {
        scanf("%d", &onda2[i]);
    }
    int inimigos[n+m];
    intercalar(n, onda1, m, onda2, inimigos);
    printf("Total inimigos (ordenados):\n");
    for(i=0; i<n+m; i++) {
        printf("%d ", inimigos[i]);
    }

    return 0;
}
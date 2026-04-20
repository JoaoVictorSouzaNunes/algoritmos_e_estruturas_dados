#include <stdio.h>

int main() {
    int n, i, j, x;
    printf("Quantidade de fragmentos: ");
    scanf("%d", &n);
    int bolsa[n];
    for(i=0; i<n; i++) {
        scanf("%d", &bolsa[i]);
    }
    for(i=1; i<n; i++) {
        x=bolsa[i];
        for(j=i-1; j>=0&&x<bolsa[j]; j--) {
            bolsa[j+1]=bolsa[j];
        }
        bolsa[j+1]=x;
    }
    printf("\n==========VETOR ORDENADO==========\n");
    for(i=0; i<n; i++) {
        printf("%d ", bolsa[i]);
    }
    return 0;
}
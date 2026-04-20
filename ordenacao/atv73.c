#include <stdio.h>

void particao(int n, int v[]) {
    int s[n];
    int pivo = v[n-1];
    int i, esq = 0, dir = n-1;

    for (i = 0; i < n; i++) {
        if (v[i] <= pivo)
            s[esq++] = v[i];
        else
            s[dir--] = v[i];
    }

    for (i = 0; i < n; i++)
        v[i] = s[i];
}

int main() {
    int n, i;
    printf("Quant. de itens no bau: ");
    scanf("%d", &n);

    int v[n];
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    particao(n, v);

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}

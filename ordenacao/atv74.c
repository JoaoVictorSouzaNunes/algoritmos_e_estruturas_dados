#include <stdio.h>

void particao(int n, int v[]) {
    int pivo = v[n-1];
    int i, j = -1, temp;

    for (i = 0; i < n-1; i++) {
        if (v[i] < pivo) {
            j++;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    temp = v[j+1];
    v[j+1] = pivo;
    v[n-1] = temp;
}

int main() {
    int n, i;
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

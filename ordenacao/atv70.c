#include <stdio.h>

int Max(int i, int f, int v[]) {
    int m, p1, p2;
    if(i<f) {
        m=(i+f)/2;
        p1=Max(i, m, v);
        p2=Max(m+1, f, v);
        return (p1>p2)?p1:p2;
    }
    return v[i];
}

int main() {
    int n, max;
    scanf("%d", &n);
    int poder[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &poder[i]);
    }
    max=Max(0, n-1, poder);
    printf("Valor maximo: %d", max);
    return 0;
}
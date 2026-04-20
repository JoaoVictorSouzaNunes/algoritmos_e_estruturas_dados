#include <stdio.h>

int main() {
    int n, aux;
    scanf("%d", &n);

    int jogadores[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &jogadores[i]);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(jogadores[j] < jogadores[j+1]) {
                aux = jogadores[j];
                jogadores[j] = jogadores[j+1];
                jogadores[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", jogadores[i]);
    }

    return 0;
}

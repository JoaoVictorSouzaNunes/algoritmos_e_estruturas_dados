#include <stdio.h>

typedef struct {
    char tipo[50];
    int hp;
}Inimigo;

int main() {
    int n;
    Inimigo inimigo;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%49s %d", inimigo.tipo, &inimigo.hp);
        printf("Inimigo: %s, HP: %d\n", inimigo.tipo, &inimigo.hp);
    }
    return 0;
}
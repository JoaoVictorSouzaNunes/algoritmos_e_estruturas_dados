#include <stdio.h>

int ataque(int n) {
    if(n==1) return 1;
    return n+ataque(n-1);
}

int main() {
    int nivel, dano_total;
    printf("Nivel do mago: ");
    scanf("%d", &nivel);
    dano_total=ataque(nivel);
    printf("Dano Total: %d", dano_total);
    return 0;
}
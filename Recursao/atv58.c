#include <stdio.h>

int CalcularDanoEco(int n) {
    if(n==1) return 0;
    if(n==2) return 1;
    return CalcularDanoEco(n-1)+CalcularDanoEco(n-2);
}

int main() {
    int n, dano;
    scanf("%d", &n);
    dano=CalcularDanoEco(n);
    printf("Dano bonus: %d", dano);
    return 0;
}
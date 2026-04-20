#include <stdio.h>

int main() {
    float forca_base, arma, buff, total;
    scanf("%f %f %f", &forca_base, &arma, &buff);
    total=forca_base+arma+buff;
    printf("Forca Total: %.2f", total);
    return 0;
}
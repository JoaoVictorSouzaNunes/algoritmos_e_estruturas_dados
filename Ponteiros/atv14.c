#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char frase_inicio_luta[]="Você nunca sairá daqui com vida!";
    char caixa_dialogo[100]="(Silêncio)";
    printf("Chefe antes da luta: %s\n", caixa_dialogo);
    strcpy(caixa_dialogo, frase_inicio_luta);
    printf("Chefe diz: %s", caixa_dialogo);
    return 0;
}
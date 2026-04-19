#include <stdio.h>

typedef struct {
    int saude, pontuacao, posX, posY;
}Heroi;

int main() {
    Heroi meuHeroi={100, 0, 0, 0};
    printf("saude: %d\npontuacao: %d\nposX: %d\nposY: %d\n", meuHeroi.saude, meuHeroi.pontuacao, meuHeroi.posX, meuHeroi.posY);
    Heroi *ptrHeroi=&meuHeroi;
    (*ptrHeroi).saude-=25;
    printf("Nova saude: %d\n", (*ptrHeroi).saude);
    (*ptrHeroi).pontuacao+=50;
    printf("Nova pontuacao: %d\n", (*ptrHeroi).pontuacao);
    (*ptrHeroi).posX+=10;
    (*ptrHeroi).posY-=5;
    printf("Novas coordenadas: (%d, %d)\n", (*ptrHeroi).posX, (*ptrHeroi).posY);
    printf("Dados atualizados!\nsaude: %d\npontuacao: %d\nposX: %d\nposY: %d\n", ptrHeroi->saude, ptrHeroi->pontuacao, ptrHeroi->posX, ptrHeroi->posY);
    return 0;
}
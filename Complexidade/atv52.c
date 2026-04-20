#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x, y;
}Unidade;

float distancia(Unidade a, Unidade b) {
    float d=sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
    return d;
}

int main(){
    int n, i, j, cont=0;
    float raio;
    Unidade* unidade;
    printf("Numero de unidades:");
    scanf("%d", &n);
    unidade=(Unidade* )malloc(sizeof(Unidade)*n);
    for(i=0; i<n; i++) {
        scanf("%d %d", &unidade[i].x, &unidade[i].y);
    }
    printf("raio de explosao: ");
    scanf("%f", &raio);
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(distancia(unidade[i], unidade[j])<=raio) cont++;
        }
    }
    free(unidade);
    printf("Quantidade de duplas proximas: ", cont);
    return 0;
}
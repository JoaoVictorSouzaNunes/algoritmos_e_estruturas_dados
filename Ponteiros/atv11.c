#include <stdio.h>

int main() {
    int balas[2]={30, 30}, granadas[2]={5, 5}, foguetes[2]={2, 2}; 
    int *inventario[3]={balas, granadas, foguetes};
    char s1[]="balas", s2[]="granadas", s3[]="foguetes";
    char *itens[3]={s1, s2, s3};
    int i;

    printf("Inventario inicial:\n");
    for(i=0; i<3; i++) {
        printf("%s: %d\n", *(itens+i), *(*(inventario+i)+1)); 
    }
    for(i=0; i<3; i++) {
        **(inventario+i)-=1;
    }
    printf("inventario apos o uso:\n");
    for(i=0; i<3; i++) {
        printf("%s: %d\n", *(itens+i), **(inventario+i));
    }
    return 0;
}
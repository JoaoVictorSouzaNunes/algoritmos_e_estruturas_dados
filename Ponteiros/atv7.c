#include <stdio.h>

void ler_cenario(int n, int* cenario) {
    for(int i=0; i<n; i++) {
        scanf("%d", cenario+i);
    }
}

int main() {
    int n;
    printf("Digite o numero de blocos no cenario: ");
    scanf("%d", &n);
    int cenario[n];
    ler_cenario(n, cenario);
    int i=0;
    while(*(cenario+i)!=1) {
        i++;
    }
    *(cenario+i)=2;
    for(i=0; i<n; i++) {
        printf("%d ", *(cenario+i));
    }
    return 0;
}
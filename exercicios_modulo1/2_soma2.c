#include <stdio.h>

int main() { // soma.c
    int N, i=1, soma=0;

    printf("Calculo da soma dos primeiros N numeros.\n");

    printf("Indique N: ");
    scanf("%d", &N);

    while(i <= N) {
        soma = soma + i;
        printf("adicionar %d, parcial %d\n", i, soma);
        i++;
    }

    printf("Total: %d\n", soma);
    
}
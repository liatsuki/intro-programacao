#include <stdio.h>

int main() { // soma.c
    int N, soma;

    printf("Calculo da soma dos primeiros N numeros.\n");
    printf("Indique N: ");
    scanf("%d", &N);

    soma = (N * (N + 1)) / 2;

    printf("Total: %d", soma);
}
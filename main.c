#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 10;
    int soma;

    printf("Iniciando o programa...\n");

    a = 8;

    soma = a + b;

    printf("A soma de %d e %d é %d\n", a, b, soma);

    printf("Programa finalizado.\n");
    return 0;
}
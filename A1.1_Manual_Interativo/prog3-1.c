#include <stdio.h>
// Variáveis | Exercicio 11 | Determina se um número é par ou impar

int main() {
    int numero;

    printf("Indique um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("par");
    else
        printf("impar");
}
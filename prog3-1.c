// Programa 3-1 Determina se um número é par ou impar
#include <stdio.h>

int main() {
    int numero;

    printf("Indique um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) // se o resto da divisão do "numero" por 2 é igual a 0
        printf("par"); // se for verdadeiro
    else
        printf("impar");   // se for falso
}
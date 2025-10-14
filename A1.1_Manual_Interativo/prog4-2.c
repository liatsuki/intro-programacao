#include <stdio.h>
// Ciclo | Exercicio 17 | Soma dos primeiros 4 quadrados naturais utilizando um ciclo

int main() {
    int soma = 0, i = 1;

    while(i <= 4) {
        soma += i * i;
        i++;
    }

    printf("Soma dos primeiros quadrados: %d", soma);
}
#include <stdio.h>
// Ciclo | Exercicio 18 | Imprime o código númerico corresponde a cada letra

int main() {
    char c = 'a';

    while(c <= 'z') {
        printf("\nLetra %c = %d", c, c);
        c++;
    }
}
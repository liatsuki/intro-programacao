#include <stdio.h>
// Variáveis | Exercicio 8 | Pede valores de variáveis de diferentes tipos que depois imprime

int main() {
    char c;
    int x;
    double d;

    printf("Introduza um caracter: ");
    scanf("%c", &c);

    printf("Introduza um inteiro: ");
    scanf("%d", &x);

    printf("Introduza um real: ");
    scanf("%lf", &d);

    printf("Valores introduzidos: %c %d %f", c, x, d);
}
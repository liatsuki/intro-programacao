// Programa 2-5 Pede valores de variáveis de diferentes tipos que depois imprime
#include <stdio.h>

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
}
// Programa 2-1 Troca o valor de duas variáveis
#include <stdio.h>

int main() {
    // declaração de três variáveis inteiras
    int x=3;
    int y=7;
    int aux;

    // trocar o valor de x com y
    aux=x;
    x=y;
    y=aux;

    // mostrar os valores em x e em y
    printf("x: %d, y: %d", x, y);
}
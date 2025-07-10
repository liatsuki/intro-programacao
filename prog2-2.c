// Programa 2-2 Troca o valor de duas variáveis sem variável auxiliar
#include <stdio.h> 

int main() {
    // declaração de duas variáveis inteiras
    int x=3, y=7;

    // trocar o valor de x com y
    x=x+y;
    y=x-y;
    x=x-y;

    // mostrar os valores em x e em y
    printf("x: %d, y: %d", x, y);
}
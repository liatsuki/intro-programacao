#include <stdio.h>
// Variáveis | Exercicio 4 | Troca o valor de duas variáveis sem variável auxiliar

int main() {
    // declaração de duas variáveis inteiras
    int x=3, y=7;

    // trocar o valor de x com y
    x = x + y; // 3 + 7 = 10 | x: 10
    y = x - y; // 10 - 7 = 3 | y: 3
    x = x - y; // 10 - 3 = 7 | x: 7

    // mostrar os valores em x e em y
    printf("x: %d, y: %d", x, y); // x: 7, y: 3
}
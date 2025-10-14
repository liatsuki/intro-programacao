#include <stdio.h>
// Variáveis | Exercicio 12 | Determina se um ano é normal ou bissexto

int main() {
    int ano=700;

    //printf("Indique ano: ");
    //scanf("%d", &ano);

    /* teste de ano bissexto */
    if(ano%4==0 && ano%100!=0 || ano%400==0)
        printf("Bissexto");
    else
        printf("Normal");
}
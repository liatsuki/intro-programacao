// Programa 3-2 Determina se um ano é normal ou bissexto
#include <stdio.h>

int main() {
    int ano;

    printf("Indique ano: ");
    scanf("%d", &ano);

    if(ano%4 =0 && ano%100!=0 || ano%400==0)
        printf("Bissexto");
    else
        printf("Normal");
}

/* Um ano é bissexto se: É divisível por 4 [E] não é divisível por 100 [OU] divisível por 400 */
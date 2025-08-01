#include <stdio.h>

int main() {

    int soma=0, n, contador=1;

    printf("Calculo da soma dos primeiros N numeros\n");
    printf("Indique N: ");
    scanf("%d", &n);

    while(contador <= n) {
        soma = soma + contador;
        printf("\tAdicionar %d, parcial %d\n", contador, soma);
        contador++;
    }

    printf("Total: %d\n", soma);
}

// soma = (n * (n+1)) / 2;

/* Por exemplo, se N = 5, os resultados parciais seriam:
Adicionar 1, parcial 1
Adicionar 2, parcial 3 (1 + 2)
Adicionar 3, parcial 6 (1 + 2 + 3)
Adicionar 4, parcial 10 (1 + 2 + 3 + 4)
Adicionar 5, parcial 15 (1 + 2 + 3 + 4 + 5) */
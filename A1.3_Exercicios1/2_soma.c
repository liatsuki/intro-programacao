#include <stdio.h>

int main() {
    int n, i=1, soma=0;
    
    printf("Calculo da soma dos primeiros N numeros.\n");
    
    printf("Indique N: ");
    scanf("%d", &n);

    //soma = (n*(n+1)) / 2;

    while(i<=n) {
        soma+=i;
        printf("  adicionar %d, parcial %d\n", i, soma);
        i++;
    }

    printf("Total: %d", soma);
}
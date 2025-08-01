#include <stdio.h>

int main() {
    int n, contador=1, produto=1;

    printf("Calculo do produto dos primeiros N numeros.\n");
    printf("Indique N: ");
    scanf("%d", &n);

    while (contador <= n) // multiplica o produto acumulado pelo contador em cada iteração, até que o contador atinja N.
    {
        produto = produto * contador;
        printf("Factorial(%d)=%d\n", contador, produto);
        contador++;
    }

    printf("Resultado: %d", produto);
    
}
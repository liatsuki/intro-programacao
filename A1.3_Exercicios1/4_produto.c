#include <stdio.h>

int main() {
    int n, i=1, produto=1;

    printf("Calculo do produto dos primeiros N numeros.\n");
    
    printf("Indique N: ");
    scanf("%d", &n);

    while(i<=n) {
        produto*=i;
        printf("  Factorial(%d)=%d\n", i, produto);
        i++;
    }
    
    printf("Resultado: %d", produto);
}
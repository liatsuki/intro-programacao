#include <stdio.h>

int main() {
    int N, i=1;
    long factorial=1;

    printf("Calculo do produto dos primeiros N numeros.\n");
    printf("Indique N: ");
    scanf("%d", &N);

    while(i<=N) {
        factorial = factorial * i;
        printf("Factorial(%d)=%d\n", i, factorial);
        i++;
    }

    printf("Resultado: %d", factorial);
}
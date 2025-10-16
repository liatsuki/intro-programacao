#include <stdio.h>

int main() {
    int fib1=1, fib2=2, i=3, num, resultado;

    printf("Calculo do valor da funcao Fibonacci:\n");

    printf("Indique N: ");
    scanf("%d", &num);

    if(num<1) {
        printf("Erro: n tem de ser maior ou igual a 1.\n");
    } else if(num==1 || num==2) {
        printf("Resultado: %d\n", num);
    } else {
        while(i<=num) {
            resultado = fib1 + fib2;
            printf(" Fib(%d)=%d\n", i, resultado);
            fib1=fib2;
            fib2=resultado;
            i++;
        }
        printf("Resultado: %d\n", resultado);
    }
}
#include <stdio.h>

int main() {
    int i=0, N=4, resultado=1;

    //printf("Indique N: ");
    //scanf("%d", &N);

    while(i<N) {
        resultado*=N;
        i++;
    }
    printf("Resultado %d^%d: %d", N, N, resultado);
}
#include <stdio.h>

int main() {
    int K, i=0;
    double resultado=0.0, factorial=1.0;

    scanf("%d", &K);

    if(K<0) {
        printf("Erro: K deve ser >= 0.\n");
    } else {
        while(i<=K) {
            if(i==0){
                resultado+=1.0/factorial;
                i++;
            } else if(i>=1) {
                factorial*=i;
                resultado+=1.0/factorial;
                i++;
            }
        }
        printf("Resultado: %.16g", resultado);
    }
}
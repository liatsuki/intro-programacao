#include<stdio.h>

int main() {
    int num, soma=0, div;

    printf("Calculo da soma do quadrado dos digitos de um numero:\n");
    
    printf("Numero: ");
    scanf("%d", &num);

    while(num>0){
        div = num % 10;
        soma+=div*div;
        printf("  n=%d; soma=%d\n", num, soma);
        num=num/10;
    }
    
    printf("Resultado: %d", soma);
}
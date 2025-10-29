#include <stdio.h> // REVER
#include <math.h>

int main() { 
    double montante;
    int total_centimos;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%lf", &montante);

    // Arredonda para o cêntimo mais próximo
    total_centimos = (int)round(montante * 100);

    int moedas2e = total_centimos / 200;
    total_centimos %= 200;

    int moedas1e = total_centimos / 100;
    total_centimos %= 100;

    int moedas50 = total_centimos / 50;
    total_centimos %= 50;

    int moedas20 = total_centimos / 20;
    total_centimos %= 20;

    int moedas10 = total_centimos / 10;
    total_centimos %= 10;

    int moedas5 = total_centimos / 5;
    total_centimos %= 5;

    int moedas2 = total_centimos / 2;
    total_centimos %= 2;

    int moedas1 = total_centimos;

    // Impressão conforme o exemplo
    if (moedas2e)  printf("2 euros: %d\n", moedas2e);
    if (moedas1e)  printf("1 euro: %d\n", moedas1e);
    if (moedas50)  printf("50 centimos: %d\n", moedas50);
    if (moedas20)  printf("20 centimos: %d\n", moedas20);
    if (moedas10)  printf("10 centimos: %d\n", moedas10);
    if (moedas5)   printf("5 centimos: %d\n", moedas5);
    if (moedas2)   printf("2 centimos: %d\n", moedas2);
    if (moedas1)   printf("1 centimo: %d\n", moedas1);

    return 0;
}

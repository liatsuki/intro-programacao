// Programa 3-3 Determina o número de dias de um mês/ano
#include <stdio.h>

int main() {
    int ano, mes, dias;

    printf("Indique ano: ");
    scanf("%d", &ano);

    printf("Indique mes: ");
    scanf("%d", &mes);

    if(mes==2) { // se o mês for 2 (fevereiro)
        if(ano%400==0 || ano%4==0 && ano%100!=0)
            printf("29"); // se for bissexto
        else
            printf("28");
    } else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) { // se for um mês com 31 dias
        printf("31");
    } else {
        printf("30"); // qualquer outro mês
    }
}
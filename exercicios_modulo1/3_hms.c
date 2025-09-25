#include <stdio.h>

int main() {
    int hora, minuto, segundos, total;

    printf("Calculo do numero de segundos desde o inicio do dia.\n");

    printf("Hora: ");
    scanf("%d", &hora);

    printf("Minuto: ");
    scanf("%d", &minuto);

    printf("Segundos: ");
    scanf("%d", &segundos);

    total = (hora * 3600) + (minuto * 60) + segundos;

    printf("Numero de segundos desde o inicio do dia: %d", total);
}
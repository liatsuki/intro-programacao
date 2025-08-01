#include <stdio.h>

int main() {
    int horas, minutos, segundos, total;

    printf("Calculo do numero de segundos desde o inicio do dia.\n");
    
    printf("Hora: ");
    scanf("%d", &horas);

    printf("Minuto: ");
    scanf("%d", &minutos);

    printf("Segundos: ");
    scanf("%d", &segundos);

    total = (horas * 3600) + (minutos * 60) + segundos; // 1 hora = 3600 segundos

    printf("Numero de segundos desde o inicio do dia: %d", total);
}
#include <stdio.h>

int main (){
    int hour, minutes, seconds, total;

    printf("Que horas são?\n");
    scanf("%d", &hour);
    printf("Minutos?\n");
    scanf("%d", &minutes);
    printf("Segundos?\n");
    scanf("%d", &seconds);

    total = hour * 3600 + minutes * 60 + seconds;

    printf("O valor em segundos é: %d\n", total);


    return 0;
}
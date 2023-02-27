#include <stdio.h>

int main(){
    float raio, diametro, circunferencia, area, pi = 3.14159;

    printf("Informe o valor do raio: "); scanf("%f", &raio);

    printf("Este é o diâmetro: %.0f\n", 2*raio);
    printf("Esta é a circunferência: %.1f\n", 2*pi*raio);
    printf("Esta é a área: %.1f\n", pi*raio*raio);
    return 0;
}

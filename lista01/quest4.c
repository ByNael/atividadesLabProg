#include <stdio.h>

int main(){
    float x;

    printf("Digite seu número:\n");
    scanf("%f", &x);
    printf("Este é o triplo: %.0f\n", x*3);
    printf("Este é o quadrado: %.0f\n", x*x);
    printf("Essa é a metade: %.1f\n", x/2);
    return 0;
}
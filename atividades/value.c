#include <stdio.h>

int main(){
    float value, service;
    
    printf("Valor da conta:\n");
    scanf("%f", &value);

    service = value / 10;

    printf("A porcentagem do garçom é: %.2f\n", service);
    printf("O valor da conta é: %.2f\n", value + service);
    return 0;
}
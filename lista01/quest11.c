#include <stdio.h>

int main(){
    float valorReal, cotacaoDolar, valorConvertido;

    printf("Qual o valor da cotação do dolar atual? \n");scanf("%f",&cotacaoDolar);
    printf("Digite o valor em reais a ser convertido: \n");scanf("%f",&valorReal);
  
    valorConvertido = valorReal / cotacaoDolar;

    printf("Valor em dolar %.2f \n", valorConvertido);
    return 0;
}

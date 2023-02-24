#include <stdio.h>

int main(){
    float valorHora, horasTrab, desconto, totalDesconto,salBruto, salLiquido;

    printf("Quantas horas foram trabalhadas? "); scanf("%f", &horasTrab);
    printf("Qual o valor da hora? "); scanf("%f", &valorHora);
    printf("Qual o percentual de desconto? "); scanf("%f", &desconto);

    salBruto = horasTrab * valorHora;
    totalDesconto = (desconto / 100) * salBruto;
    salLiquido = salBruto - totalDesconto;

    printf("Salário bruto: %.2f\n", salBruto);
    printf("Salário líquido: %.2f\n", salLiquido);

    return 0;
}

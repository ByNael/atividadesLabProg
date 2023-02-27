#include <stdio.h>

int main() {
    float dias, valorFinal, desconto, gratificacao;

    printf("Quantos dias trabalhados? "); scanf("%f", &dias);
 
    if(dias<10){
    valorFinal = dias * 50,25;
    desconto = valorFinal * 10/100;
    valorFinal = valorFinal - desconto;
    } else if(dias>=10 && dias<=20){
    valorFinal = dias * 50,25;
    desconto = valorFinal * 10/100;
    gratificacao  = valorFinal * 20/100;
    valorFinal = (valorFinal - desconto) + gratificacao;
    } else {
    valorFinal = dias * 50,25;
    desconto = valorFinal * 10/100;
    gratificacao  = valorFinal * 30/100;
    valorFinal = (valorFinal - desconto) + gratificacao; //pode ser resolvido com switch case
    }

    printf("A receber: R$%.2f\nDesconto R$%.2f\n", valorFinal, desconto);
    return 0;
}
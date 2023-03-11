#include <stdio.h>

int main (){
    int n1, n2, divisao;

    printf("Digite o primeiro numero: "); scanf("%d", &n1);

    do{
        printf("Digite o segundo numero nao nulo: "); scanf("%d", &n2);
    }while (n2 == 0);

    divisao = (float)n1 / n2;

    printf("O resultado da divisao e: %d\n", divisao);
    return 0;
}
#include <stdio.h>

int main (){
    int n, maior, menor, i;

    printf("Digite um numero: "); scanf("%d", &n);

    maior = menor = n;
    i = 1;

    while (n != 0){
        printf("Digite um numero: "); scanf("%d", &n);

        if (n > maior) maior = n;
        if (n < menor) menor = n;
        i++;
    }
    
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Numeros digitados: %d numeros\n", i);
    return 0;
}
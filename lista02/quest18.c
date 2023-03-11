#include <stdio.h>

int main(){
    int i, anterior = 1, soma = 0;

    for(i = 2; i <= 60; i++){
        anterior *= 2;
        soma += anterior;
    }
    
    printf("Soma dos numeros de grãos de trigo: %d\n", soma);
    return 0;
}
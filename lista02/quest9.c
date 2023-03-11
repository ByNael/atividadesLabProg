#include <stdio.h>

int main(){
    int anterior = 1, ultimo = 1, proximo, i;

    printf("1, 1, ");
    for(i = 1; i <= 20; i++){
        proximo = anterior + ultimo;
        anterior = ultimo;
        ultimo = proximo;
        printf("%d, ", ultimo);
    }

    printf("\n");
    printf("Este e o vigesimo termo da serie de Fibonacci: %d\n", ultimo);
    return 0;
}
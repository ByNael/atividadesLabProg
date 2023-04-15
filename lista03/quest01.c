#include <stdio.h>
#define TAM 15

int main(){
    float vetor[TAM];
    float maior = 0, menor = 0;
    int i;
    for (i = 0; i < TAM; i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%f", &vetor[i]);
    }
    for (i = 0; i < TAM; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Soma do maior com o menor = %f\n", maior + menor);
    return 0;
}
#include <stdio.h>
#define TAM 100

int main(){
    int vetor[TAM], i, j, aux, inicio, fim;
    printf("Digite o intervalo: ");
    printf("Inicio: ");
    scanf("%d", &inicio);
    printf("Fim: ");
    scanf("%d", &fim);
    for (i = 0; i < TAM; i++){
        vetor[i] = rand() % (fim - inicio + 1) + inicio;
    }

    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            if (vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for (i = 0; i < TAM; i++){
        printf("%d\n", vetor[i]);
    }
    return 0;
}
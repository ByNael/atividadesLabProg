#include <stdio.h>

int main(){
    int numero, i, j, soma = 0;

    printf("Digite um numero: "); scanf("%d", &numero);

    for(i = 0; i <= 4; i++){
        j = numero % 10;
        numero /= 10;
        soma += j;
    }
    
    if(soma == numero){
        printf("O numero %d e um palindromo\n", numero);
    }
    else{
        printf("O numero %d nao e um palindromo\n", numero);
    }
    return 0;
}
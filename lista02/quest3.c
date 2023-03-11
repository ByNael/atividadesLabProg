#include <stdio.h>

int main(){
    unsigned int f, i, fatorial = 1;
    printf("Digite um numero inteiro e positivo: "); scanf("%ld", &f);

    for(i = 1; i <= f; i++){
        fatorial *= i;
    }
    
    printf("Fatorial = %d\n", fatorial);
    return 0;
}
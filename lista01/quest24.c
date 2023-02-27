
#include <stdio.h>
#include <math.h>

int main(){

    int x, n, i, potencia;

    printf("Digite um valor para x: "); scanf("%d", &x);
    printf("Digite um valor para n: "); scanf("%d", &n);

    i = x * 2;
    potencia = pow(i,n);

    printf("O produto entre x por 2 elevado a n é: %d\n", potencia); 
    return 0;
    
}
#include <stdio.h>

int main(){
    int x;

    printf("Digite um numero: "); scanf("%d", &x);

    (x % 2) != 0 ? printf("Seu número é impar"):printf("Seu número é par");
    return 0;
}

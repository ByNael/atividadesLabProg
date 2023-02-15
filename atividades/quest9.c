#include <stdio.h>

int main (){
    int x, y=1;

    printf("Escreva um número inteiro: \n");
    scanf("%d", &x);

    printf("Estes são seu antecessor e sucessor respectivamente: %d e %d\n", x-y,x+y);
    
    return 0;
}
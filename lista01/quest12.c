#include <stdio.h>

int main(){
    int x,y;

    printf("Valor de x: \n");scanf("%d", &x);
    printf("Valor de y: \n");scanf("%d", &y);   
    printf("Soma dos valores: %d\n", x+y);
    printf("Produto dos valores: %d\n", x*y);
    printf("Diferença dos valores: %d\n", x-y);
    printf("Quociente dos valores: %d\n", x/y);
    printf("Resto dos valores: %d\n", x%y);
    return 0;
}

#include <stdio.h>


int main(){
    int x,y,z;

    printf("Informe o valor de X: \n");scanf("%d", &x);
    printf("Informe o valor de Y: \n");scanf("%d", &y);

    z = x;  x = y;    y = z;

    printf("O valor de X é: %d \n", x); printf("O valor de Y é: %d \n", y);
    return 0; 
}
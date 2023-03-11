#include <stdio.h>

int main(){
    unsigned char x, y, i, j, aux;

    printf("Digite um numero: "); scanf("%d", &x);
    printf("Digite um numero: "); scanf("%d", &y);

    for(i = 0; i < y; i++){
        aux = x;
        for(j = 0; j < 4; j++){
            x = x >> 1;
        }
        x = x << 1;
        x = x | aux;
    }
    
    printf("%d\n", x);
    return 0;
}
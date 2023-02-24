#include <stdio.h>

int main(){
    int x, y;

    printf("Digite um número inteiro: "); scanf("%d", &x);

    y = (x >=0) ? x: 2*x; //não soube fazer corretamente a situação falsa

    printf("Este é seu valor absoluto: %d", y);
    return 0;
}

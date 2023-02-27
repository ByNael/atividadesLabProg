#include <stdio.h>

int main(){

    int numOriginal, primeiro, segundo, terceiro;

    printf("Digite um numero de tres digitos: "); scanf("%d", &numOriginal);

    primeiro = numOriginal / 100;
    segundo = (numOriginal % 100) / 10;
    terceiro = numOriginal % 10;
    numOriginal = terceiro * 100 + segundo * 10 + primeiro;

    printf("Este é seu número inverso: %d\n", numOriginal);
    return 0;
}
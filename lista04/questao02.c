#include <stdio.h>

int main(){
    int a, b, *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    *pa = a;
    *pb = b;
    printf("O valor do primeiro numero e: %d\n", *pb);
    printf("O valor do segundo numero e: %d\n", *pa);
    return 0;
}
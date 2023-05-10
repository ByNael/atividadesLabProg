#include <stdio.h>

int main () {
    int a, b, *pa;
    pa = &a;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    *pa = a + b;
    printf("O valor da soma e: %d\n", *pa);
    printf("O endereco de memoria do valor da soma e: %p\n", pa);
    return 0;
}
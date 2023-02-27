#include <stdio.h>

int main(){
    int x;

    printf("Digite seu número:\n");
    scanf("%d", &x);
    printf("Hexadecimal: %X\n", x);
    printf("Octal: %o\n", x);
    return 0;
}
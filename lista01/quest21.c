#include <stdio.h>

int main(){
    int num1, num2;

    printf("Escreva o primeiro número: "); scanf("%d", &num1);
    printf("Escreva o segundo número: "); scanf("%d", &num2);

    (num2 % num1) != 0 ? printf("É múltiplo"):printf("Não é múltiplo");
    return 0;
}

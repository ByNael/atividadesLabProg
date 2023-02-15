#include <stdio.h>

int main (){
    int volume, lenght, width, height;

    printf("Qual o cumprimento do retângulo?\n");
    scanf("%d", &lenght);
    printf("Largura?\n");
    scanf("%d", &width);
    printf("Altura?\n");
    scanf("%d", &height);

    volume = lenght * width * height;

    printf("O volume do retângulo é: %d\n", volume);

    return 0;
}
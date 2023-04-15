#include <stdio.h>

int main(){
    char string[100];
    int i, contador = 0;
    printf("Digite uma string: ");
    scanf("%s", string);
    for (i = 0; i < 100; i++){
        if (string[i] = '\0'){
            break;
        }
        contador++;
    }
    printf("A string possui %d caracteres\n", contador);
    return 0;
}
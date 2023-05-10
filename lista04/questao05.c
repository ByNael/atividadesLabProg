#include <stdio.h>

int main(){
    char a[100], *p;
    p = a;
    printf("Digite uma string: ");
    scanf("%s", a);
    while(*p != '\0'){
        p++;
    }
    printf("O tamanho da string e: %d\n", p - a);
    return 0;
}
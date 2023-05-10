#include <stdio.h>

int main(){
    int a, *p;
    p = &a;
    printf("Digite um valor: ");
    scanf("%d", &a);
    while(a != 0){
        if(a < *p){
            *p = a;
        }
        printf("Digite um valor: ");
        scanf("%d", &a);
        printf("O menor valor e: %d\n", *p);
    }
    printf("Fim do programa\n");
    return 0;
}
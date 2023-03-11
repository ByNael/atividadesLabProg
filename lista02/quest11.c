//Na lista tem um erro de escrita dizendo para refazer a propria questão 11, interpretei que fosse a 10 e assim ficou:
#include <stdio.h>

int main(){
    int a, b, i, quadrado;

    printf("Digite o valor de A: "); scanf("%d", &a);
    printf("Digite o valor de B: "); scanf("%d", &b);

    if(a > b){
        for(i = b; i <= a; i++){
            if(i % 4 == 0){
                quadrado = i * i;
                printf("%d\n", quadrado);
            }
        }
    }
    else{
        for(i = a; i <= b; i++){
            if(i % 4 == 0){
                quadrado = i * i;
                printf("%d\n", quadrado);
            }
        }
    }
    return 0;
}
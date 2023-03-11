#include <stdio.h>

int main(){
    int i, soma = 0;

    for(i = 0; i <= 100; i++){
        if(i % 3 == 0){
            soma += i;
        }
    }
    for(i = 100; i <= 200; i++){
        if(i % 5 == 0){
            soma += i;
        }
    }

    printf("Soma dos numeros divisiveis por 3 e 5 entre 0 e 200: %d\n", soma);
    return 0;
}
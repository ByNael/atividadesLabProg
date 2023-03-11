#include <stdio.h>

int main(){
    int i, quadrado;

    for (i = 15; i <= 90; i++){
        if (i % 4 == 0){
            quadrado = i * i;
            printf("%d\n", quadrado);
        }
    }
    
    return 0;
}
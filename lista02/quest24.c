#include <stdio.h>

int main(){
    int cateto1, cateto2, hipotenusa, i, j, k;
    
    for(i = 1; i <= 500; i++){
        for(j = 1; j <= 500; j++){
            for(k = 1; k <= 500; k++){
                if(i * i + j * j == k * k){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
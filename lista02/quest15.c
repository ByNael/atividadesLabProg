#include <stdio.h>
#include <math.h>

int main(){
    int base, expoente, i;
    
    for(i = 0; i <= 7; i++){
        base = 3;
        expoente = i;
        printf("%d elevado a %d = %d\n", base, expoente, pow(base, expoente));
    }
    return 0;
}
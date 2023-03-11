#include <stdio.h>

int main(){
    int jose = 150, pedro, anos = 0;

    for (pedro = 110; pedro <= jose; anos++){
        pedro += 3;
        jose += 2;
    }

    printf("Foram %d anos\n", anos);
    return 0;
}
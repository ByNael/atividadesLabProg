#include <stdio.h>

int main(){
    int celsius, fahrenheit, i;
    
    for(i = 10; i <= 100; i += 10){
        celsius = i;
        fahrenheit = (celsius * 9/5) + 32;
        printf("%d graus Celsius = %d graus Fahrenheit\n", celsius, fahrenheit);
    }
    return 0;
}
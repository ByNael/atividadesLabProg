#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Celsius = "); scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0; 
}
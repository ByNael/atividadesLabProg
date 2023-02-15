#include <stdio.h>

int main(){
    float height, weight;
    char gender;

    printf("Qual a sua altura?\n");
    scanf("%f", &height);
    printf("Qual o seu sexo?(Responda com M ou F)\n");
    scanf("%s", &gender);

    if(gender == 'M'){
        weight = 72,7*height-58;
        printf("Seu peso ideal é: %.2f\n", weight);
    }else{
        weight = 62,1*height-44,7;
        printf("Seu peso ideal é: %.2f\n", weight);
    }

    return 0;
}
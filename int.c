#include <stdio.h>

int main(){
    /*int a = 3, b=2, c;

    if(a==3 && b==2){
        c=a;
        a=b;
        b=c;

        printf("valor: a: %d b: %d\n", a,b);
    }*/

    short int i = 32767;
    i+=i;

    printf("Short int: %u\n", i);

    return 0;
}
#include <stdio.h> //standard input output  

int main(){

    int a, b=5, c;

    printf("olá: b: %d a: %d\n", b,a);

    unsigned long tam;

    puts("Espaço ocupado em memória: ");
    printf("int: %lu\n", sizeof(int)); //long unsigned int dessa forma não ocorre mais o erro
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("char: %lu\n", sizeof(char));
    printf("int: %lu\n", sizeof(long int));
    printf("int: %lu\n", sizeof(short int));

    printf("long int: %lu\n", tam);

    return 0;
}
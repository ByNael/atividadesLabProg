#include <stdio.h>

int main(){
    char a[100], b[100], *p, *q;
    p = a;
    q = b;
    printf("Digite uma string: ");
    scanf("%s", a);
    while(*p != '\0'){
        *q = *p;
        p++;
        q++;
    }
    printf("A string copiada e: %s\n", b);
    return 0;
}
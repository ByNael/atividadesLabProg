#include <stdio.h>

int main(){
    int valor, entrada, prestacao, diferencaEntradaPrestacao;
  
    printf("Digite o valor da mercadoria: "); scanf("%d", &valor);
  
    diferencaEntradaPrestacao = valor % 3;
    prestacao = valor / 3;
    entrada = prestacao + diferencaEntradaPrestacao;
  
    printf("Entrada: %d\n", entrada);
    printf("Prestacoes: %d\n", prestacao);
  
    return 0;
}
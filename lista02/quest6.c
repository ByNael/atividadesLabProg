#include <stdio.h>
#include <stdlib.h>

void imprimirRelatorio(int, int, int, int);

int main(){
    int voto, paulo=0, renata=0, branco=0, nulo=0;
    char c;

    do{
        puts("Ola eleitor, seja bem-vindo. Digite seu voto ou se preferir, um numero negativo para sair: ");
        puts("5. Paulo");
        puts("7. Renata");
        puts("0. Branco");

        scanf("%d", &voto);
        getchar(); 

        puts("Confirmar? s: sim | outra tecla: nao");
        c = getchar();  

        if (c != 's') continue;

        switch (voto){

            case 0: 
                branco++; 
                break;
            case 5: 
                paulo++;
                break;
            case 7: 
                renata++;
                break;
            default:  
                nulo += (voto>0)?1:0;
        }
       
    } while (voto >= 0);

    printf("Resultado da eleicao\n");
    printf("Quantidade de votos\n");
    printf("\t 5. Paulo: %d\n",paulo);
    printf("\t 7. Renata: %d\n",renata);
    printf("\t 0. Brancos: %d\n",branco);
    printf("\t Nulos: %d\n",nulo);

    imprimirRelatorio(paulo, renata, branco, nulo);

    return 0;
}


void imprimirRelatorio(int p, int r, int b, int n){
    int totalVotos = p + r + b + n;
    float pp, pr, pb, pn;

    pp = ( ( (float) p )/totalVotos) * 100;
    pr = ( ( (float) r )/totalVotos) * 100;
    pb = ( ( (float) b )/totalVotos) * 100;
    pn = ( ( (float) n )/totalVotos) * 100;

    puts("-------------");
    printf("Porcentagem de votos\n");
    printf("Quantidade de votos\n");
    printf("\t 5. Paulo: %.2f%%\n",pp);
    printf("\t 7. Renata: %.2f%%\n",pr);
    printf("\t 0. Brancos: %.2f%%\n",pb);
    printf("\t Nulos: %.2f%%\n",pn);
    puts("-------------");
    printf("Candidato eleito: %s\n", (p > r) ? "Paulo(5)" : "Renata(7)");
}
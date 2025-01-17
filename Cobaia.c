#include <stdio.h>

// Quer saber no final do ano o percentual de cobaias utilizadas

int main (void){

    char tipo;
    int sapo = 0, rato = 0, coelhos = 0;
    int numero = 0;
    int quantidade = 0;
    int total_de_cobaia = 0;

    printf("Quantos casos serao digitados: ");
    scanf("%d", &numero);

    for ( int i = 0; i <= numero; i++){
        printf("Quantidade de cobais: ");
            scanf("%d", &quantidade);

        printf("Tipo de cobaia: ");
            scanf("%c", &tipo);

            total_de_cobaia += quantidade;

// Estudar mais questoes sobre isso ( nao consegui resolver essa logica):
        if ( tipo == 's'){
            sapo += quantidade;
        } else if ( tipo == 'c'){
            coelhos += quantidade;
        } else if ( tipo == 'r'){
            rato += quantidade;
        }    
    }

// Exibe os resultados ------------------------------------------

    printf("RELATORIO FINAL:\n");
    printf("Total: %d\n", total_de_cobaia);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    coelhos = coelhos / total_de_cobaia * 100;
    rato = rato / total_de_cobaia * 100;
    sapo = sapo / total_de_cobaia * 100;

    printf("Percentual de coelho: %d%%\n", coelhos);
    printf("Percentual de ratos: %d%%\n", rato);
    printf("Percentual de sapos: %d%%\n", sapo);

    return 0;

}
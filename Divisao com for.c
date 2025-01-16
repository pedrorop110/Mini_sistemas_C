#include <stdio.h>

int main (void){

    float divisao = 0;
    float numero = 0;
    float numerador = 0, denominador = 0;


    printf("Quantos casos voce vai digitar? ");
    scanf("%f", &numero);

    for ( int i = 0; i < numero; i++){  // Estrtura for para repetir as mensagens
        printf("Entre com o numerador: ");
        scanf("%f", &numerador);
        printf("Entre com o denominador: ");
        scanf("%f", &denominador);

    divisao = numerador / denominador;

        if (denominador != 0){
            printf("DIVISAO = %.2f\n", divisao);
        }

        if (denominador == 0){
            printf("DIVISAO IMPOSSIVEL\n");
        }
    }

    return 0;
}
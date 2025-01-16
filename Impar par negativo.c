#include <stdio.h>

int main (void){

    int valor = 0;
    int numero = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &numero);

    for ( int i = 0; i < numero; ++i){
        printf("Digite um numero: ");
        scanf("%d", &valor);

// Impar ------------------------------------------------        
        if ( valor % 2 != 0){
            if ( valor < 0){
                printf("Impar negativo\n");
            } else {
                printf("Impar\n");
            }

// Par --------------------------------------------------
        } else {
            if ( valor < 0){
                printf("Par negativo\n");
            } else {
                printf("Par\n");
            }
        }
    }

    return 0;
}
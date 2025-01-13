#include <stdio.h>

// Nesse codigo eu otmizei o codigo utilizando vetores

int main (void){

    float codigo[5] = {5.0, 3.5, 4.8, 8.9, 7.32};
    float quantidade = 0;
    int numero = 0;

    printf("Codigo do produdo comprado: ");
        scanf("%d", &numero);

    printf("Quantidade comprada: ");
        scanf("%f", &quantidade);

    codigo[5] *= quantidade;

    switch (numero){

        case 1:
            printf("Valor a pagar: %.2f",codigo[0]);
                break;

        case 2:
            printf("Valor a pagar: %.2f",codigo[1]);
                break;

        case 3:
            printf("Valor a pagar: %.2f",codigo[2]);
                break;

        case 4:
            printf("Valor a pagar: %.2f",codigo[3]);
                break;

        case 5:
            printf("Valor a pagar: %.2f",codigo[4]);
                break;

    }

    return 0;
}

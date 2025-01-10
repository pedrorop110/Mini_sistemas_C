#include <stdio.h>

int main ()
{
    float codigo1 = 5.00;
    float codigo2 = 3.50;
    float codigo3 = 4.80;
    float codigo4 = 8.90;
    float codigo5 = 7.32;
    float quantidade = 0;
    int numero = 0;

    printf("Codigo do produdo comprado: ");
        scanf("%d", &numero);

    printf("Quantidade comprada: ");
        scanf("%f", &quantidade);

    codigo1 *= quantidade;
    codigo2 *= quantidade;
    codigo3 *= quantidade;
    codigo4 *= quantidade;
    codigo5 *= quantidade;

    switch (numero){
        case 1:
            printf("Valor a pagar: %.2f",codigo1);
            break;
    
        case 2:
            printf("Valor a pagar: %.2f",codigo2);
            break;

        case 3:
            printf("Valor a pagar: %.2f",codigo3);
            break;

        case 4:
            printf("Valor a pagar: %.2f",codigo4);
            break;

        case 5:
            printf("Valor a pagar: %.2f",codigo5);
            break;

    default:
        printf("Codigo invalido!");
        break;
    }

    return 0;
}
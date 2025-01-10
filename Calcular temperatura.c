#include <stdio.h>

float FparaC( float Fahrenheit){
    return (Fahrenheit - 32.0) * 5.0 / 9.0;
}

float CparaF(float Celcius){
    return ( Celcius * 9.0 / 5.0 ) + 32.0;
}

int main ()
{
    char letra;
    float c = 0;
    float f = 0;
    float resultado1 = 0;
    float resultado2 = 0;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
        scanf("%c", &letra);

    switch ( letra ) {

// Celcius -------------------------------------------------------------------------------------
        case 'c':
            printf("Digite a temperatura em celcius: ");
                scanf("%f", &c);
                resultado1 = CparaF(c);
                printf("Temperatura equivalente em Fahrenheit: %.2f", resultado1);
            break;

// ---------------------------------------------------------------------------------------------

// Fahrenheit ----------------------------------------------------------------------------------
        case 'f':
            printf("Digite a temperatura em fahrenheit: ");
                scanf("%f", &f);
                resultado2 = FparaC(f);
                printf("Temperatura equivalente em Celcius: %.2f", resultado2);
            break;
// ---------------------------------------------------------------------------------------------

        default:
            printf("Resposta invalida!");
            break;
    }

    return 0;
}
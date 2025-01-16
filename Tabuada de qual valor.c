#include <stdio.h>

// criar um programa para ler um numero e dizer a tabuada desse numero.

int main (void){

    int x = 0;
    int resultado = 0;
    int numero = 0;

    printf("deseja a tabuada de qual valor? ");
        scanf("%d",&numero);

    if ( numero <= 10 && numero >= 1)
        for ( int i = 1; i <= 10; ++i ){
            x = numero;
            resultado = i * x;
            printf("%d x %d = %d\n", x, i, resultado);
        }

    return 0;
}
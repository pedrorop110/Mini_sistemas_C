#include <stdio.h>

int main (void){

    float x = 0;
    float y = 0;

    printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%f", &x);
        scanf("%f", &y);


    while (x, y){
// Q2 ----------------------------------------------------
    if ( x > 0 && y > 0){
        printf("QUADRANTE Q2\n");

// Q3 ----------------------------------------------------
    } else if ( x < 0 && y < 0){
        printf("QUADRANTE Q3\n");

// Q4 ----------------------------------------------------
    } else if ( x > 0 && y < 0){
        printf("QUADRANTE Q4\n");

// Q1 ----------------------------------------------------
    } else if ( x < 0 && y > 0){
        printf("QUADRANTE Q1\n");

// Origem ------------------------------------------------
    } else if ( x == 0 && y == 0){
        printf("Origem\n");

// Eixo X ------------------------------------------------
    } else if ( x > 0 || x < 0 && y == 0){
        printf("Eixo X\n");

// Eixo Y ------------------------------------------------
    } else if ( y > 0 || y < 0 && x == 0){
        printf("Eixo Y\n");
    }

    printf("Insira outro dois valores:\n");
        scanf("%f", &x);
        scanf("%f", &y);
}

    return 0;
}
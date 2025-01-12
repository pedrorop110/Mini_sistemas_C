#include <stdio.h>

int main ()
{
    float x = 0;
    float y = 0;

    printf("Valor de X: ");
        scanf("%f", &x);

    printf("Valor de Y: ");
        scanf("%f", &y);

    if ( x > 0 && y > 0){
        printf("Q1");
        
    } else if ( x < 0 && y < 0){
        printf("Q3");

    } else if ( x > 0 && y < 0){
        printf("Q4");

    } else if ( x < 0 && y > 0){
        printf("Q2");

    } else if ( x == 0 && y == 0){
        printf("Origem");

    } else if ( x > 0 || x < 0 && y == 0){
        printf("Eixo X");

    } else if ( y > 0 || y < 0 && x == 0){
        printf("Eixo Y");
    }

    return 0;
}
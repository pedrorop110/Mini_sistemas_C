#include <stdio.h>

// media = soma dos valores / quantidade

int main (void){

    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

// Nota 1 ----------------------------------------------------------

    printf("Insira a primeira nota: ");
        scanf("%f", & nota1);

        while ( nota1 < 0 || nota1 > 10){
            printf("Valor invalido! Tente novamente: ");
                scanf("%f", &nota1);
        }
// -----------------------------------------------------------------

// Nota 2 ----------------------------------------------------------

    printf("Insira a segunda nota: ");
        scanf("%f", &nota2);

    while ( nota2 < 0 || nota2 > 10){
        printf("Valor invalido! Tente novamente: ");
            scanf("%f", &nota2);
    }
// -----------------------------------------------------------------

    media = (nota1 + nota2) / 2.0;
    printf("MEDIA = %.2f", media);

    return 0;
}

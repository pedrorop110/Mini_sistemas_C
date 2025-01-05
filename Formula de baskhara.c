#include <stdio.h>
#include <math.h>

int main ()
{
    double coeficienteA = 0;
    double coeficienteB = 0;
    double coeficienteC = 0;
    double x = 0;
    double x1 = 0;
    double x2 = 0;
    double delta = 0;

    printf("Coeficiente A: ");
        scanf("%lf", &coeficienteA);

    printf("Coeficiente b: ");
        scanf("%lf", &coeficienteB);

    printf("Coeficiente C: ");
        scanf("%lf", &coeficienteC);

    if ( coeficienteA == 0 ){
        printf("Coeficiente A não pode ser zero. A equação não é quadrática.\n");
        return 1;
    }

    delta = pow (coeficienteB, 2) - 4 * coeficienteA * coeficienteC; 

    if ( delta > 0 ){
        x1 = (-coeficienteB + sqrt(delta)) / ( 2 * coeficienteA );
        x2 = (-coeficienteB - sqrt (delta)) / ( 2 * coeficienteA );

        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf", x2);

    } else if ( delta == 0 ){
        x = -coeficienteB / ( 2 * coeficienteA );

        printf("X = %.4lf", x);
    } else if ( delta < 0 ){
        printf("Essas raizes sao muito complexas!");
    }


    return 0;
}
#include <stdio.h>

int main ()
{

    int x = 0;
    int y = 0;
    int z = 0;

    printf("Formar um triangulo:\n");
    
// Valor de X ------------------------------
    printf("Insira o valor de X: ");
        scanf("%d", &x);
    
// Valor de Y ------------------------------
    printf("Insira o valor de Y: ");
        scanf("%d", &x);
    
// Valor de Z ------------------------------
    printf("Insira o valor de Z: ");
        scanf("%d", &z);

    if ( x == y || x == z){
        printf("Isoceles!");
    } else if ( x != y || x != z){
        printf("Escaleno!");
    } else if (x == y || x == z ){
        printf("Equilatero!");
    }



    return 0;
}
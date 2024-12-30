#include <stdio.h>

int main ()
{
    float nota;

    printf("Insira sua nota: ");
        scanf("%f", &nota);

printf("\n");

    if (nota >= 7 ){
        printf("APROVADO\n");
    
    } else if ( nota < 7 && nota >= 4){
        printf("Recuperacao\n");
    
    } else if ( nota < 4 && 4 > nota ){
        printf("REPROVADO\n");
    }



    return 0;
}
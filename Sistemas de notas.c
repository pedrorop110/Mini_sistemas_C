#include <stdio.h>

int main ()
{
    float nota;

    printf("Insira sua nota: ");
        scanf("%f", &nota);

printf("\n");   // Quebrar linha

    if (nota >= 7 ){    // Se " nota " for maior ou igual a 7...
        printf("APROVADO\n");
    
    } else if ( nota < 7 && nota >= 4){ // Então se " nota " for maior que 7 && " nota " for maior ou igaul a 4...
        printf("Recuperacao\n");
    
    } else if ( nota < 4 && 4 > nota ){ // Entao se " nota " for menor que 4...
        printf("REPROVADO\n");
    }



    return 0;
}
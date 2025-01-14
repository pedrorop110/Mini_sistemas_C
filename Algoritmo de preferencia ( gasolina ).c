#include <stdio.h>

int main(void){

    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;
    int numero = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &numero);

    while ( numero != 4){
        switch (numero){
            case 1:
                alcool += 1;
                break;

            case 2:
                gasolina += 1;
                break;

            case 3:
                diesel += 1;
                break;

            case 4:
                printf("MUITO OBRIGADO!\n");
                break;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &numero);
    }

    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
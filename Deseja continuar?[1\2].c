#include <stdio.h>

// Sistema de Coninuar ou Desistir utilizando switch case

int main ()
{
    int x;

    printf("Deseja continuar?[1/2]\n");
        scanf("%d", &x);

printf("\n");   // Quebra linha

    switch ( x ){
        case 1:     // Caso o usario digite " 1 " ele ira executar o seguinte comando...
            printf("Voce continuou.\n");
                break;
        case 2:     // Caso o usario digite " 2 " ele ira executar o seguinte comando...
            printf("Voce desistiu.\n");
                break;
        default:    // Caso o usario digite qualquer outro numero ele ira executar o seguinte comando...
            printf("Opcao invalida.");
                break;
    }

    return 0;
}

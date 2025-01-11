#include <stdio.h>

// novo valor = v + ( v × p ) / 100

int main ()
{
    float salario = 0;
    float novo_salario = 0;
    float porcentagem = 0;


    printf("Digite o salario da pessoal: ");
        scanf("%f", &salario);

// 20% --------------------------------------------------------------------
    if ( salario <= 1000 ){
        porcentagem = 20;
        novo_salario = salario + ( salario * porcentagem ) / 100;

        printf("Novo salario = %.2f\n", novo_salario);
    novo_salario -= salario;
        printf("Aumento = %.2f\n", novo_salario);
        printf("Porcenteagem = %.0f%%", porcentagem);
//--------------------------------------------------------------------------

// 15% --------------------------------------------------------------------
    } else if ( salario > 1000 && salario <= 3000){
        porcentagem = 15;
        novo_salario = salario + ( salario * porcentagem ) / 100;

        printf("Novo salario = %.2f\n", novo_salario);
    novo_salario -= salario;
        printf("Aumento = %.2f\n", novo_salario);
        printf("Porcenteagem = %.0f%%", porcentagem);
//--------------------------------------------------------------------------

// 10% --------------------------------------------------------------------
    } else if ( salario > 3000 && salario <= 8000){
        porcentagem = 10;
        novo_salario = salario + ( salario * porcentagem ) / 100;

        printf("Novo salario = %.2f\n", novo_salario);
    novo_salario -= salario;
        printf("Aumento = %.2f\n", novo_salario);
        printf("Porcenteagem = %.0f%%", porcentagem);
//--------------------------------------------------------------------------

// 5% ---------------------------------------------------------------------
    } else if ( salario > 8000){
        porcentagem = 5;
        novo_salario = salario + ( salario * porcentagem ) / 100;

        printf("Novo salario = %.2f\n", novo_salario);
    novo_salario -= salario;
        printf("Aumento = %.2f\n", novo_salario);
        printf("Porcenteagem = %.0f%%", porcentagem);
    }
//--------------------------------------------------------------------------



    return 0;
}
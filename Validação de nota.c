#include <stdio.h>

int main ()
{
    float nota1 = -1;
    float nota2 = 0;

    printf("Digite a primeira nota ( 0 a 10 ): ");

while (nota1 < 0 || nota1 > 10) // Se for verdadeira ira repetir
{
    scanf("%f", &nota1);

    if ( nota1 < 0 || nota1 > 10){
        printf("Valor invalido! Tente novamente: ");
    }
}


printf("NOTA1 = %.2f\n", nota1);
printf("NOTA2 = %.2f\n", nota2);

    return 0;
}
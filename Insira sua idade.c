#include <stdio.h>

int main ()
{
    double idade = 0;

    do {
        printf("Insira sua idade: ");
            scanf("%lf", &idade);
    } while ( idade < 0);{
        printf("Valor validado");
    }

    return 0;
}
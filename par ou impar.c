#include <stdio.h>

int main ()
{
    int x;

    printf("Insira um valor: ");
    scanf("%d", &x);    // Armazena o valor do usario

    if (x % 2 == 0){    // Se a sobra ( % ) da divisao por 2 for igual ( == ) a 0, o numero é par
        printf("O numero e par");
    } else {    // caso contrario o numero é impar
        printf("O numero e impar");
    }

    return 0;
}
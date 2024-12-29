#include <stdio.h>

// Neste codigo nos convertemos um numero em dm, cm e mm

int main()
{
    float x = 0;    // Variavel de exemplo para o resultado
    float dm = 0;   // Decímetros
    float cm = 0;   // Centímetros
    float mm = 0;   // Milímetros

    printf("Insira um valor: \n");
    scanf("%f", &x);    // Armazena o valor do usario

    dm = x * 10;   //   Formula do decímetro ( X . 10)
    cm = x * 20;   //   Formula do centímentro ( X . 20)
    mm = x * 30;   //   Formula do milímetro ( X . 30)

    printf ("Conversao em decimetro: %.2f\n", dm);
    printf ("Conversao em centimetro: %.2f\n", cm);
    printf ("Conversao em milimetros: %.2f\n", mm);

    return 0;
}
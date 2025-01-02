#include <stdio.h>

/*  Fazer um programa para receber um número inteiro de segundos do usuário e
imprimir a quantidade correspondente em horas, minutos e segundos. */

int main ()
{
    int x = 0;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    printf("Insira um numero: ");
        scanf("%d", &x);

horas = x / 3600; 
minutos = (x % 3600) / 60;
segundos = x % 60;

printf("%d:%d:%d",horas, minutos, segundos);



    return 0;
}
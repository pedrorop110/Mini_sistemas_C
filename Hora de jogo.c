#include <stdio.h>

int main ()
{
    int duracao = 0;
    int hora_final = 0;
    int hora_inicial = 0;

    printf("Hora inicial: ");
        scanf("%d", &hora_inicial);

    printf("Hora final: ");
        scanf("%d", &hora_final);


    if ( hora_inicial < hora_final){
        duracao = hora_final - hora_inicial;
        printf("O JOGO DUROU %d HORA(S)", duracao);

    } else if ( hora_inicial > hora_final){
        duracao = 24 - hora_inicial + hora_final;
        printf("O JOGO DUROU %d HORA(S)", duracao);
        
    } else if ( hora_inicial == 0 && hora_final == 0){
        printf("O JOGO DUROU 24 HORA(S)");
    }

    return 0;
}
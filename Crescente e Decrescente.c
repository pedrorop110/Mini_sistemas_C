#include <stdio.h>

/* Enunciado: Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais. */


//  OBS:
// - Dois valores inteiros
// - Verificar se é crescente ou decrescente
// - Finalizar programa quando os valores forem iguais

int main ()
{
    int x = 0;
    int y = 0;

    printf("Insira dois valores:\n");
        scanf("%d", &x);
        scanf("%d", &y);

    while ( x != y) // Enquanto essa condição for verdadeira ele ira executar o bloco de comando abaixo:
    {
        if ( x > y){
            printf("Crescente!");
        } else { printf("Decrescente!");}

        printf("Insira outro dois valores:\n"); //Ele ira pedir para ler os valores novamente, pois se nao ele nao ira repetir
            scanf("%d", &x);
            scanf("%d", &y);
    }
    




    return 0;
}
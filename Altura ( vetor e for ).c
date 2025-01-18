#include <stdio.h>

int main (void){

    float soma = 0;
    int numeros = 0;
    float media = 0;
    float percentual = 0;
    float idade_menor16 = 0;

    printf("Quantas pessoas serao digitados? ");
    scanf("%d", &numeros);

    char nome[numeros][50]; // Matriz para armazenar no maximo 50 letras
    int idade[numeros];
    float altura[numeros];


    // Coleta os dados das pessoas
    for ( int i = 0; i < numeros; ++i){
        printf("Dados da %da pessoa", i);
        printf("Nome: ");
            scanf("%s", nome[i]); // Armazena os nomes
        printf("Idade: ");
            scanf("%d", &idade[i]); // Armazena a idade
        printf("Altura: ");
            scanf("%f", &altura[i]); // Armazena a altura
        soma += idade[i]; // Soma as idades para calcular a media

        // Verificar se a pessoa tem menos de 16 anos
        if ( idade[i] < 16){
            idade_menor16++; // Incrementar ao contador
        }
    }

    // Calcula o percental de pessoas com menos de 16 anos
    percentual = (idade_menor16 / numeros) * 100;
    
    // Calcula a media
    media = soma / numeros;

    // Exibe a altura media e o percentual de pessoas com menos de 16 anos
    printf("Altura media = %.2f\n", media);
    printf("Pessoas com menos de 16 anos: %.2f%%\n", percentual);


    // Exibe o nome das pessoas com menos de 16 anos
    for ( int i = 0; i < numeros; i++){
        if ( idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
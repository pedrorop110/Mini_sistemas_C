#include <stdio.h>

int main (void){

    int numeros = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &numeros);

    float vet[numeros];

    for (int i = 0; i < numeros; i++){
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }

    float maior = vet[0];
    int maiorposicao = 0;

    for (int i = 0; i < numeros; i++){
        if ( vet[i] > maior){
            maior = vet[i];
            maiorposicao = i;
        }
    }

    printf("\nMAIOR VALOR = %.1f\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", maiorposicao);

    return 0;
}
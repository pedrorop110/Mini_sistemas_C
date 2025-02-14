#include <stdio.h>

int main (void){

    int numeros = 0;
    
    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &numeros);
    
    int vet[numeros];
    int vet2[numeros];
    int resultado[numeros];
    
    // Vetor A ----------------------------------------
    printf("Digite os valores do vetor A:\n");
    for ( int i = 0; i < numeros; i++){
        scanf("%d", &vet[i]);
    }

    // Vetor B ----------------------------------------
    printf("Digite os valores do veto B:\n");
    for (int i = 0; i < numeros; i++){
        scanf("%d", &vet2[i]);
    }

    // Soma -------------------------------------------
    for ( int i = 0; i < numeros; i++){
        resultado[i] = vet[i] + vet2[i];
    }
    
    // Exibição dos valores ---------------------------
    printf("VETOR RESULTANTE:\n");
    for ( int i = 0; i < numeros; i++){
        printf("%d\n", resultado[i]);
    }
    
    return 0;
}
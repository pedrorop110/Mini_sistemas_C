#include <stdio.h>

// Função para calcular o dolar
float CalcularDolar(float cotacao, float reais){
    return reais / cotacao;
}

int main ()
{
    float real;
    float resultado;
    float cotacao;

// Valor do usuario em real
    printf("Insira um valor ( Em R$ ):\n");
    scanf("%f", &real);

printf("\n"); // Quebrar linha

// Cotação que o usuario informou
    printf("Quanto esta 1 real em dolar?\n");
    scanf("%f", &cotacao);

// Invocar funcao "CalcularDolar", dividindo cotação por real
    resultado = CalcularDolar(cotacao, real);

printf("\n"); // Quebrar linha

// Printa o resultado
    printf("Resultado: %.2f",resultado);

    return 0;
}
#include <stdio.h>

// Neste codigo temos um sistema de senha simples

int main ()
{
    int senha = 0;  // Valor equivalente a 0 para evitar lixo de memoria

    do {    // Faça:

        printf("Insira sua senha: ");
            scanf("%d", &senha);

    } while ( senha != 1234);   // Se essa condição nao for verdadeira ele ira executar o " do " novamente
    {
        printf("Acesso concedido!");    // Caso a condição for verdadeira o acesso sera liberado
    }



    return 0;
}
#include <stdio.h>

/* Enunciado:

Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR". 


	- Primeiramente, para calcular a media precisamos ter em mente que a formula sera:

	MEDIA = soma / quantidade de valores

	Ou seja, precisamos criar as variaveis " soma ", " cont " e " MEDIA "
	- Soma para somar todos os valores
	- Cont para contar quantos numeros foram inseridos
	- MEDIA para fazer o calculo e imprimir o valor no final
*/

int main ()
{
    int idade = 0;
    int soma = 0;
    int cont = 0;
    double media = 0;

    printf("Insira sua idade:\n");
        scanf("%d", &idade);

    while ( idade >= 0 ){       // Ou seja, quanto a idade for maior ou igual a 0 ele ira repetir
        soma += idade;          // Como " soma " é equivalente a 0, ele ira somar todo o valor que a idade receber
        cont += 1;              // " Cont " tambem é equivalente a 0, e ira receber +1 toda vez que o loop se repetir
        scanf("%d", &idade);    // Aqui ele lê a idade novamente, pois se nao o programa ira entrar em loop infinito
    }

    if ( cont == 0 ){           // Se cont for igual a 0 ele ira dizer que é "Impossivel calcular!"
        printf("Impossivel calcular");
    } else {
        media = soma / cont;    // Aqui ele informa a maquina a formula da media
        printf("MEDIA = %.2lf", media); // Printa a o valor da media
    }

    return 0;
}
#include <stdio.h>

int main ()
{
    int num1 = 0;
    int num2 = 0;

    printf("Digite dois numeros inteiros:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);

    if ( num1 % num2 == 0 && num2 % num1 == 0){
        printf("Nao sao multiplos!");

    } else {
        printf("Sao multiplos");
    }
    
    return 0;
}
// 12. Entrar com um número inteiro positivo e exibir o fatorial deste número,
// lembrando que 0! = 1. Exemplo: 5! = 5x4x3x2x1 = 120

#include <stdio.h>

int main() 
{
    int num, i;
    int fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("O número inteiro deve ser positivo.\n");
    } 
    else 
    {

        for (i = 1; i <= num; i++) 
        {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d.\n", num, fatorial);
    }

    return 0;
}
// 9. Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre 
// os 2 valores lidos (incluindo os valores lidos na soma). Considere que o 
// segundo valor lido será sempre maior que o primeiro valor lido.

#include <stdio.h>

int main()
{
    int v1, v2, soma = 0;

    printf("Digite dois valores inteiros (segundo maior que o primeiro): ");
    scanf("%d %d", &v1, &v2);

    if (v1 >= v2)  
    {
        printf("O segundo valor deve ser maior que o primeiro valor!\n");
        return 1;
    }

    for (int i = v1; i <= v2; i++) 
    {
        soma += i;
    }

    printf("A soma dos inteiros entre %d e %d é: %d\n", v1, v2, soma);
    
    return 0;
}

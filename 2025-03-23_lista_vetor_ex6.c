//  6.	Implemente um programa em C que preencha um vetor de dimensão 10 com valores do usuário
// e calcule a soma dos elementos positivos que se encontrarem nas posições pares do vetor.

#include <stdio.h>

int main() {
    int vetor[10];
    int soma = 0;

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i += 2) 
    {
        if (vetor[i] > 0) 
        {
            soma += vetor[i];
        }
    }

    printf("A soma dos elementos positivos nas posições pares é: %d\n", soma);

    return 0;
}

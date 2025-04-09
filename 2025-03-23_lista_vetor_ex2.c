// 2. Leia um vetor de 6 valores reais e exiba a média, o maior e o menor valor.

#include <stdio.h>

int main() {
    float vetor[6];
    float soma = 0, media, maior, menor;

    printf("Digite 6 valores reais:\n");
    for (int i = 0; i < 6; i++) 
    {
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 6; i++) {
        soma += vetor[i];
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    media = soma / 6;

    printf("Média: %.2f\n", media);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}
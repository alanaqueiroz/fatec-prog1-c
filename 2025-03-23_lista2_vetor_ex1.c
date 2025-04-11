// 1. Leia um vetor de 10 valores inteiros e exiba todos os valores ímpares.

#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores ímpares no vetor:\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
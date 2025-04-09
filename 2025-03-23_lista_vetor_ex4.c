// 4. Crie um programa que copie um vetor de 10 posições de inteiros (preenchidos aleatoriamente),
// de trás para frente, em um segundo vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetorOriginal[10], vetorInvertido[10];

    srand(time(NULL));

    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) 
    {
        vetorOriginal[i] = rand() % 100;
        printf("%d ", vetorOriginal[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) 
    {
        vetorInvertido[i] = vetorOriginal[9 - i];
    }

    printf("Vetor invertido:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", vetorInvertido[i]);
    }
    printf("\n");

    return 0;
}
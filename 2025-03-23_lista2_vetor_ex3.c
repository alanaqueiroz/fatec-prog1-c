// 3. Leia um vetor de 12 posições e em seguida ler também dois valores X e Y 
// quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá 
// escrever a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>

int main() {
    int vetor[12];
    int X, Y;

    printf("Digite 12 valores inteiros para o vetor:\n");
    for (int i = 0; i < 12; i++) 
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posição X (0 a 11): ");
    scanf("%d", &X);
    printf("Digite a posição Y (0 a 11): ");
    scanf("%d", &Y);

    if (X < 0 || X >= 12 || Y < 0 || Y >= 12) 
    {
        printf("Posições inválidas! As posições devem estar entre 0 e 11.\n");
    } else 
    {
        int soma = vetor[X] + vetor[Y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", X, Y, soma);
    }

    return 0;
}
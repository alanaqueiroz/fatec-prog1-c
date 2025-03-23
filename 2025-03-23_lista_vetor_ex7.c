//  7.	Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma
// e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma
// e o resultado da contagem.

#include <stdio.h>

int main() {
    float notas[10], soma = 0, media;
    int contador = 0;

    printf("Digite as notas dos 10 alunos:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++) 
    {
        if (notas[i] > media) 
        {
            contador++;
        }
    }

    printf("Média da turma: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", contador);

    return 0;
}
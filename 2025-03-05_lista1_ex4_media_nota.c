// 4. Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e 
// escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual 
// ou maior que 6 o aluno é aprovado). Escrever também a média calculada.

#include <stdio.h>

int main()
{
    float n1, n2, media;

    printf("Digite a 1a nota do aluno: ");
    scanf("%f", &n1);

    printf("Digite a 2a nota do aluno: ");
    scanf("%f", &n2);

    media = (n1 + n2)/2;
    
    printf("A média do aluno foi: %.2f\n", media);

    if (media >= 6.0)
    {
        printf("O aluno foi APROVADO!\n");
    }
    else
    {
        printf("O aluno foi REPROVADO!\n");
    }

    return 0;
}
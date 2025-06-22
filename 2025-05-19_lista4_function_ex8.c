// 8. Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela abaixo:
// Nota                 Conceito
// de 0,0 a 4,9         D
// de 5,0 a 6,9         C
// de 7,0 a 8,9         B
// de 9,0 a 10,0        A
// ps: lembre-se que ao lidar com char o caractere deve estar entre aspas simples (ex: ‘A’), as aspas duplas são utilizadas 
// para string (ex: “casa”)

#include <stdio.h>

char conceitoAluno(float media) {
    if (media >= 0.0 && media <= 4.9) {
        return 'D';
    } else if (media >= 5.0 && media <= 6.9) {
        return 'C';
    } else if (media >= 7.0 && media <= 8.9) {
        return 'B';
    } else if (media >= 9.0 && media <= 10.0) {
        return 'A';
    } else {
        return 'X';
    }
}

int main() {
    float media;
    char conceito;

    printf("Digite a média final do aluno: ");
    scanf("%f", &media);

    conceito = conceitoAluno(media);

    if (conceito != 'X') {
        printf("Conceito do aluno: %c\n", conceito);
    } else {
        printf("Média inválida! Digite um valor entre 0.0 e 10.0.\n");
    }

    return 0;
}
// 6. Faça um programa que conta o número de ocorrências de um caractere numa string (usar for).

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200], c;
    int contador = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &c);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == c) {
            contador++;
        }
    }

    printf("O caractere '%c' aparece %d vezes.\n", c, contador);
    return 0;
}
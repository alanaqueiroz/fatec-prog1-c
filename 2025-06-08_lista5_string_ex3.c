// 3. Faça um programa em C que receba uma frase do usuário e mostre a frase inversamente (usar for). 

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int len = strlen(frase);
    if (frase[len - 1] == '\n') len--; // remover '\n'

    printf("Frase invertida: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(frase[i]);
    }
    printf("\n");

    return 0;
}
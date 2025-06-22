// 1. Faça um programa em C que receba uma frase qualquer fornecida pelo usuário, 
// calcule e mostre quantos caracteres a frase possui. 

#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    int tamanho = strlen(frase);

    printf("A frase possui %d caracteres.\n", tamanho);
    return 0;
}
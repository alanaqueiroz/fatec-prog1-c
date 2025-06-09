// 2. Faça um programa em C em que um procedimento receba uma frase do usuário e mostre a frase, 
// palavra por palavra, uma em cada linha diferente. 

#include <stdio.h>
#include <string.h>

void mostrar_palavras(char frase[]) {
    char *palavra = strtok(frase, " \n");
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " \n");
    }
}

int main() {
    char frase[200];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    mostrar_palavras(frase);
    return 0;
}
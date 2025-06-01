// tamanho vetor

#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = 0;

    printf("\nTamanho: %zu\n", strlen(texto));

    return 0;
}

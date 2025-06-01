// tamanho vetor / caixa alta / caixa baixa

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];
    int i;

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    texto[strcspn(texto, "\n")] = 0;

    printf("\nTamanho: %zu", strlen(texto));

    for (i = 0; texto[i] != '\0'; i++) {
        texto[i] = toupper(texto[i]);
    }
    printf("\nCaixa alta: %s", texto);

    for (i = 0; texto[i] != '\0'; i++) {
        texto[i] = tolower(texto[i]);
    }
    printf("\nCaixa baixa: %s\n", texto);

    return 0;
}

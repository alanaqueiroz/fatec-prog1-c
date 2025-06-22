// 5. Crie um procedimento que receba por parâmetro uma string, 
// e exiba cada letra em uma linha diferente, porém tudo em maiúsculo. 

#include <stdio.h>
#include <ctype.h>

void mostrar_maiusculas(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            printf("%c\n", toupper(str[i]));
        }
    }
}

int main() {
    char texto[200];
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    mostrar_maiusculas(texto);
    return 0;
}
// 4. Crie uma struct chamada pessoa com os dados: nome e cpf. Crie um vetor para armazenar 5 pessoas. 
// Possibilite o usuário preencher o vetor, exibir os nomes e cpfs cadastrados e, por fim,
// exibir se existe algum cpf repetido ou não.

#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    char cpf[15];
};

int main() {
    struct Pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        strtok(pessoas[i].nome, "\n"); // remove '\n'
        printf("CPF: ");
        fgets(pessoas[i].cpf, sizeof(pessoas[i].cpf), stdin);
        strtok(pessoas[i].cpf, "\n");
    }

    printf("\n--- Dados Cadastrados ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s, CPF: %s\n", pessoas[i].nome, pessoas[i].cpf);
    }

    // Verifica CPF duplicado
    int duplicado = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(pessoas[i].cpf, pessoas[j].cpf) == 0) {
                duplicado = 1;
                printf("CPF duplicado encontrado: %s\n", pessoas[i].cpf);
            }
        }
    }

    if (!duplicado) {
        printf("Nenhum CPF duplicado encontrado.\n");
    }

    return 0;
}
// 4. Criar uma struct “cliente” com codigo, nome e rg. Declare uma variável global do tipo cliente. 
// Crie um procedimento para preencher os dados do cliente e outro procedimento para exibir os dados do cliente. 
// Crie, no main, um menu para o usuário poder optar por: sair, cadastrar e exibir. 

#include <stdio.h>
#include <string.h>

struct Cliente {
    int codigo;
    char nome[50];
    char rg[20];
};

struct Cliente clienteGlobal;

void cadastrarCliente() {
    printf("Digite o código do cliente: ");
    scanf("%d", &clienteGlobal.codigo);
    getchar();

    printf("Digite o nome do cliente: ");
    fgets(clienteGlobal.nome, sizeof(clienteGlobal.nome), stdin);
    clienteGlobal.nome[strcspn(clienteGlobal.nome, "\n")] = '\0';

    printf("Digite o RG do cliente: ");
    fgets(clienteGlobal.rg, sizeof(clienteGlobal.rg), stdin);
    clienteGlobal.rg[strcspn(clienteGlobal.rg, "\n")] = '\0';

    printf("\nCliente cadastrado com sucesso!\n\n");
}

void exibirCliente() {
    printf("\n--- Dados do Cliente ---\n");
    printf("Código: %d\n", clienteGlobal.codigo);
    printf("Nome: %s\n", clienteGlobal.nome);
    printf("RG: %s\n\n", clienteGlobal.rg);
}

int main() {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1 - Cadastrar cliente\n");
        printf("2 - Exibir cliente\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); 

        switch(opcao) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                exibirCliente();
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}

// 10. Crie uma estrutura para definir um produto contendo nome, peso e preco. Definir uma variável global para armazenar 
// 8 produtos, um procedimento para preencher os dados dos produtos, uma função para calcular a média de preços, 
// uma função para calcular o produto mais leve. Deve existir um menu para acessar as funcionalidades do programa.

#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 8

typedef struct {
    char nome[50];
    float peso;
    float preco;
} Produto;

Produto produtos[MAX_PRODUTOS];

void preencherProdutos() {
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("\nProduto %d:\n", i + 1);

        printf("Nome: ");
        getchar();
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Peso (kg): ");
        scanf("%f", &produtos[i].peso);

        printf("Preço (R$): ");
        scanf("%f", &produtos[i].preco);
    }
    printf("\nProdutos cadastrados com sucesso!\n");
}

float mediaPrecos() {
    float soma = 0.0f;
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        soma += produtos[i].preco;
    }
    return soma / MAX_PRODUTOS;
}

int produtoMaisLeve() {
    int indiceMaisLeve = 0;
    for (int i = 1; i < MAX_PRODUTOS; i++) {
        if (produtos[i].peso < produtos[indiceMaisLeve].peso) {
            indiceMaisLeve = i;
        }
    }
    return indiceMaisLeve;
}

void exibirProduto(Produto p) {
    printf("Nome: %s\n", p.nome);
    printf("Peso: %.2f kg\n", p.peso);
    printf("Preço: R$ %.2f\n", p.preco);
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastrar produtos\n");
        printf("2 - Calcular média dos preços\n");
        printf("3 - Mostrar produto mais leve\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                preencherProdutos();
                break;
            case 2: {
                float media = mediaPrecos();
                printf("Média dos preços: R$ %.2f\n", media);
                break;
            }
            case 3: {
                int indice = produtoMaisLeve();
                printf("Produto mais leve:\n");
                exibirProduto(produtos[indice]);
                break;
            }
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

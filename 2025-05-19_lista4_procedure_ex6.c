// 6. Criar um programa com um vetor de inteiros com 100 posições e global. Criar um procedimento para preencher este vetor 
// com números aleatórios (rand) e outro procedimento que exibirá todos os valores acima de 80. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vetor[100];

void preencherVetor() {
    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 101;
    }
    printf("Vetor preenchido com valores aleatórios.\n");
}

void exibirAcimaDe80() {
    printf("Valores maiores que 80:\n");
    for (int i = 0; i < 100; i++) {
        if (vetor[i] > 80) {
            printf("vetor[%d] = %d\n", i, vetor[i]);
        }
    }
}

int main() {
    int opcao;

    srand(time(NULL));

    do {
        printf("\nMenu:\n");
        printf("1 - Preencher vetor com números aleatórios\n");
        printf("2 - Exibir valores acima de 80\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                preencherVetor();
                break;
            case 2:
                exibirAcimaDe80();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}

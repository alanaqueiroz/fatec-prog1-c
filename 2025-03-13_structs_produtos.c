#include <stdio.h>
#include <stdlib.h>

struct produto {
    char nome[100];
    float valor;
};

int main() {
    struct produto p1, p2;

    fflush(stdin);
    printf("Nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    printf("Valor: ");
    scanf("%f", &p1.valor);
    getchar();

    printf("\n\nNome: ");
    fgets(p2.nome, sizeof(p2.nome), stdin);
    printf("Valor: ");
    scanf("%f", &p2.valor);

    system("cls");

    printf("%s - R$ %.2f\n", p1.nome, p1.valor);
    printf("\n\n%s - R$ %.2f\n", p2.nome, p2.valor);
    printf("\n\n");

    if(p1.valor > p2.valor) 
    {
        printf("O produto 1 e mais caro");
    } 
    else 
    {
        printf("O produto 2 e mais caro");
    }

    return 0;
}

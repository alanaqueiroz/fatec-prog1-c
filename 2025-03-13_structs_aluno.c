#include <stdio.h>
#include <stdlib.h> 

struct aluno
{
    int codigo;
    char nome[50];
};

int main()
{
    struct aluno a, b;

    printf("Codigo: ");
    scanf("%d", &a.codigo);
    getchar();
    printf("Nome: ");
    fgets(a.nome, sizeof(a.nome), stdin);

    printf("Codigo: ");
    scanf("%d", &b.codigo);
    getchar();
    printf("Nome: ");
    fgets(b.nome, sizeof(b.nome), stdin);

    printf("\n\nNome: %sCodigo: %d", a.nome, a.codigo);
    printf("\n\nNome: %sCodigo: %d", b.nome, b.codigo);

    return 0;
}
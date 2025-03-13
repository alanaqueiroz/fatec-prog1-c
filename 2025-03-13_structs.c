#include <stdio.h>

struct aluno
{
    int codigo;
    char nome[50];
}

main()
{
    aluno a,b;
    
    printf("Codigo: ");
    scanf("%d",&a.codigo);
    fflush(stdin);
    print("Nome: ");
    get(a.nome);
    
    fflush(stdin);
    printf("Codigo: ");
    scanf("%d",&b.codigo);
    fflush(stdin);
    print("Nome: ");
    get(b.nome);
    
    printf("\n\nNome %s \nCodigo: %d", a.nome, a.codigo);
    printf("\n\nNome %s \nCodigo: %d", b.nome, b.codigo);

    return 0;
}

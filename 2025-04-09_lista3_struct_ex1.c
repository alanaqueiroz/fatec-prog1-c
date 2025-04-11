// 1. Fazer um programa com um registro “livro”, que contém os elementos título, ano de edição, número de páginas e preço. 
// Criar uma variável desta estrutura, que é um vetor de 5 elementos. Ler os valores para a estrutura e imprimir a média 
// do número de páginas dos livros. 

#include <stdio.h>

struct Livro {
    char titulo[100];
    int ano;
    int paginas;
    float preco;
};

int main() {
    struct Livro livros[5];
    int totalPaginas = 0;
    
    for(int i = 0; i < 5; i++) {
        printf("Livro %d:\n", i+1);
        printf("Título: ");
        scanf(" %[^\n]", livros[i].titulo);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        printf("Número de páginas: ");
        scanf("%d", &livros[i].paginas);
        printf("Preço: ");
        scanf("%f", &livros[i].preco);
        
        totalPaginas += livros[i].paginas;
    }
    
    float media = totalPaginas / 5.0;
    printf("\nMédia de páginas: %.2f\n", media);
    
    return 0;
}
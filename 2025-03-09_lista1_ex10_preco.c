// 10. Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever (não deve ser usado vetor):
// - o maior preço lido
// - a média aritmética dos preços dos produtos

int main() 
{    
    int codigo;
    float preco, maior_preco = 0, soma = 0;
    
    for (int i = 1; i <= 15; i++) 
    {
        printf("Digite o código do produto %d: ", i);
        scanf("%d", &codigo);
        
        printf("Digite o preço do produto %d: ", i);
        scanf("%f", &preco);
        
        if (preco > maior_preco) 
        {
            maior_preco = preco;
        }
        
        soma += preco;
    }
    
    float media = soma / 15;
    
    printf("O maior preço lido foi: %.2f\n", maior_preco);
    printf("A média aritmética dos preços é: %.2f\n", media);
    
    return 0;
}
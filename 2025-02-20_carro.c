//2. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
//porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
//Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
//escrever um algoritmo para ler o custo de fábrica de um carro, calcular e
//escrever o custo final ao consumidor.

#include <stdio.h>

int main() {
	
    float cfabrica, cfinal;

    printf("Digite o custo de fábrica de um carro: ");
    scanf("%f", &cfabrica);
    
    cfinal = cfabrica + (cfabrica*0.28) + (cfabrica*0.45);
    
    printf("\nO valor do carro final do carro somado aos imposto e igual a: %.2f\n", cfinal);
    
    return 0;
}
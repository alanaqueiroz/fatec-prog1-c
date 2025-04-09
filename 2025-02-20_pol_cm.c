// 1. Ler uma medida em polegadas e imprimir a equivalente em centímetros,
// sabendo que 2.54 cm equivale a 1 polegada.

#include <stdio.h>

int main() {
    int pol;
    float cm;
    float media;

    printf("Digite o valor em polegadas: ");
    scanf("%d", &pol);
    
    cm = pol * 2.54;
    
    printf("\nO valor de %d polegadas em centimetros e igual a: %.2f\n", pol, cm);
    
    return 0;
}
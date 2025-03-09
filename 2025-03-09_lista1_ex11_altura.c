// 11. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e
// resce 3 centímetros por ano. Construir um algoritmo que calcule e imprima
// quantos anos serão necessários para que Juca seja maior que Chico.

#include <stdio.h>

int main() 
{

    float alturaChico = 1.50, alturaJuca = 1.10;
    int anos = 0;

    float crescimentoChico = 0.02;
    float crescimentoJuca = 0.03;

    while (alturaJuca <= alturaChico) 
    {
        alturaChico += crescimentoChico;
        alturaJuca += crescimentoJuca;
        anos++;
    }

    printf("Serão necessários %d anos para que Juca seja maior que Chico.\n", anos);

    return 0;
}

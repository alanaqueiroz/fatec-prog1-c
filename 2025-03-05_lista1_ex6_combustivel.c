// 6. Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
// álcool: até 20 litros, desconto de 3% por litro. acima de 20 litros, desconto de 5% por litro
// gasolina: até 20 litros, desconto de 4% por litro. acima de 20 litros, desconto de 6% por litro
// Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
// (codificado da seguinte forma: 1-álcool, 2-gasolina), calcule e imprima o valor a 
// ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 6,30 e o 
// preço do litro do álcool é R$ 3,90.

#include <stdio.h>

int main() 
{
    int tipoCombustivel, litros;
    float precoAlcool = 3.90, precoGasolina = 6.30;
    float desconto, valorTotal;

    printf("Digite o tipo de combustível (1-Álcool, 2-Gasolina): ");
    scanf("%d", &tipoCombustivel);
    printf("Digite a quantidade de litros: ");
    scanf("%d", &litros);

    if (tipoCombustivel == 1) 
    {
        if (litros <= 20) 
        {
            desconto = 0.03;
        } else 
        {
            desconto = 0.05;
        }
        valorTotal = litros * precoAlcool * (1 - desconto);
    } 

    else if (tipoCombustivel == 2) 
    {
        if (litros <= 20) 
        {
            desconto = 0.04;
        } else 
        {
            desconto = 0.06;
        }
        valorTotal = litros * precoGasolina * (1 - desconto);
    } 
    
    else 
    {
        printf("Tipo de combustível inválido!\n");
        return 1;
    }

    printf("O valor a ser pago é R$ %.2f\n", valorTotal);

    return 0;
}
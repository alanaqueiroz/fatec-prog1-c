// 6. Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
// Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
// (codificado da seguinte forma: 1-álcool, 2-gasolina), calcule e imprima o valor a 
// ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 6,30 e o 
// preço do litro do álcool é R$ 3,90.

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade >= 5 && idade <= 7)
    {
        printf("A categoria do nadador é INFANTIL A \n");
    }
    if (idade >= 8 && idade <= 10)
    {
        printf("A categoria do nadador é INFANTIL B \n");
    }
    if (idade >= 11 && idade <= 13)
    {
        printf("A categoria do nadador é INFANTIL A \n");
    }
    if (idade >= 14 && idade <= 17)
    {
        printf("A categoria do nadador é JUVENIL B \n");
    }
    if (idade >= 18)
    {
        printf("A categoria do nadador é ADULTO \n");
    }

    return 0;
}
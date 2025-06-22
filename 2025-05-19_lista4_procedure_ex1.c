// 1. Crie um procedimento que receba por parâmetro dois valores reais (float) e execute a 
// subtração do primeiro valor pelo segundo, em seguida exiba o resultado.

#include <stdio.h>

void subtrair(float a, float b) {
    float resultado = a - b;
    printf("Resultado da subtração: %.2f\n", resultado);
}

int main() {
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    subtrair(num1, num2);

    return 0;
}

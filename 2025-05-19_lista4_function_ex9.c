// 9. Crie um procedimento receba um valor real e dentro deste é feito a chamada de uma função, 
// passando por parâmetro o valor recebido. A função deve retornar o valor multiplicado por 10 e exibido
// o resultado dentro do procedimento.

#include <stdio.h>

float multiplicarPor10(float valor) {
    return valor * 10;
}

void processarValor(float valor) {
    float resultado = multiplicarPor10(valor);
    printf("Resultado da multiplicação por 10: %.2f\n", resultado);
}

int main() {
    float valor;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    processarValor(valor);

    return 0;
}

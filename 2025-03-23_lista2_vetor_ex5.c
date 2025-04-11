// 5. Implemente um programa em C que receba do usuário dez temperaturas em graus Farenheit,
// transforme-as em graus Celsius e armazene os resultados em um vetor. Terminada a entrada de dados,
// os valores armazenados devem ser apresentados. Obs.: A fórmula é C = (ºF - 32) / 1,8.

#include <stdio.h>

int main() {
    float fahrenheit[10], celsius[10];

    printf("Digite 10 temperaturas em graus Fahrenheit:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Temperatura %d (°F): ", i + 1);
        scanf("%f", &fahrenheit[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        celsius[i] = (fahrenheit[i] - 32) / 1.8;
    }

    printf("\nTemperaturas em Celsius:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Temperatura %d: %.2f°C\n", i + 1, celsius[i]);
    }

    return 0;
}
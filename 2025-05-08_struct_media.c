#include <stdio.h>
#include <conio.h>

double media_ponderada(double nota1, double nota2, double nota3, double peso1, double peso2, double peso3) {
    return (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);
}

int main() {

    double nota1, nota2, nota3;

    double p1 = 0.4;
    double p2 = 0.3;
    double p3 = 0.3;

    printf("Digite a nota da primeira prova: ");
    scanf("%lf", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%lf", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%lf", &nota3);

    double media = media_ponderada(nota1, nota2, nota3, p1, p2, p3);

    printf("A média ponderada é: %.2lf\n", media);

    return 0;
}


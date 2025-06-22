// 2. Faça um procedimento que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 1.33 * PI * R³). 
// Pesquise e use a função pow() para a exponenciação. 

#include <stdio.h>
#include <math.h>

#define PI 3.14159

void calcularVolumeEsfera(float raio) {
    float volume = 1.33 * PI * pow(raio, 3);
    printf("Volume da esfera: %.2f\n", volume);
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calcularVolumeEsfera(raio);

    return 0;
}

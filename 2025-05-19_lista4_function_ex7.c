// 7. Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio (rand), um número de 1 até 6.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(NULL));

    printf("Valor do dado: %d\n", Dado());

    return 0;
}
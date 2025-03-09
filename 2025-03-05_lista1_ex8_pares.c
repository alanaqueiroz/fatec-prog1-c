// 8. Fazer um programa para encontrar todos os pares entre 1 e 38.

#include <stdio.h>

int main() {

    for (int i = 1; i <= 38; i++) 
    {
        if (i % 2 == 0) 
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    if(n1 != n2)
    {
        printf("Os numeros sao diferentes.");
    }
    else
    {
        printf("Os numeros sao iguais."); 
    }

    return 0;
}

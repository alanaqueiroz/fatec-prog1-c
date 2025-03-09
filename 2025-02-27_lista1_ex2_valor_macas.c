// 2. As maçãs custam R$ 3,30 cada se forem compradas menos de uma dúzia, e R$3,00 se 
// forem compradas pelo menos 12. // Escreva um programa que leia o número de maçãs 
// compradas, calcule e escreva o custo total da compra.

#include <stdio.h>

int main()
{
    int m, vf;

    printf("Digite o numero de macas compradas: ");
    scanf("%d", &m);
    
    if(m < 12)
    {
        vf = m * 3.30;
        printf("Os valor das macas saira por %d", vf);
    }
    
    if (m >= 12)
    {
        vf = m * 3.00;
        printf("O valor das macas saira por %d", vf); 
    }

    return 0;
}

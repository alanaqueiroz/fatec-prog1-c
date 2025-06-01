// comparação de string

#include <stdio.h>
#include <string.h>

int main() {
    char t1[30], t2[30];

    printf("Digite a primeira string: ");
    fgets(t1, sizeof(t1), stdin);

    t1[strcspn(t1, "\n")] = 0;

    printf("Digite a segunda string: ");
    fgets(t2, sizeof(t2), stdin);

    t2[strcspn(t2, "\n")] = 0;

    if (strcmp(t1, t2) == 0) {
        printf("\nIguais\n");
    } else {
        printf("\nDiferentes\n");
    }

    return 0;
}

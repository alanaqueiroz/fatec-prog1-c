// concatenar

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[50];

    strcpy(a, "Fatec");
    strcat(a, " ");
    strcpy(b, "Bauru");
    strcat(a, b);

    printf("%s\n", a);

    return 0;
}

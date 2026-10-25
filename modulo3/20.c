#include <stdio.h>

int main () {

    float magnitude1;
    float magnitude2;

    printf("Digite a magnitude 1: ");
    scanf("%f", &magnitude1);

    printf("Digite a magnitude 2: ");
    scanf("%f", &magnitude2);

    if (magnitude1 > magnitude2) {
        printf("Resultado da magnitude 1 e maior: %.1f", magnitude1);
    }

    else if (magnitude1 == magnitude2) {
        printf("Os resultados sao iguais");
    }

    else {
        printf("Resultado da magnitude 2 e maior: %.1f", magnitude2);
    }

    return 0;
}

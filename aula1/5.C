#include <stdio.h>

int main () {
    //Ler um número e mostrar sua tabuada de 1 a 10 usando "for"
    int numero, i;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

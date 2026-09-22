#include <stdio.h>

int main () {
    //Ler dois números inteiros e mostre soma, subtração e multiplicação
    int a, b;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);

    if (b != 0) {
        printf("Divisao Inteira: %d\n", a / b);
        printf("Resto da divisao: %d\n", a % b);
    }

    return 0;
}

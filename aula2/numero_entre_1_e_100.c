#include <stdio.h>

int main() {
    int numero;
    int tentativas = 0;

    printf("Digite um numero entre 1 e 100: ");
    scanf("%d", &numero);
    tentativas++;

    while (numero < 1 || numero > 100) {
        printf("Valor invalido! Digite um numero entre 1 e 100: ");
        scanf("%d", &numero);
        tentativas++;
    }

    printf("numero invalido: %d\n", numero);
    printf("Tentativas necessarias: %d\n", tentativas);

    return 0;
}

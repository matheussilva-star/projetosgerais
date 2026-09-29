#include <stdio.h>

int main() {

    int quantidade, numero;
    int maior_valor, menor_valor;
    int soma = 0;
    int i;
    float media;

    printf("Quantos numeros quer digitar? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma += numero;

        if (i == 1) {
            maior_valor = numero;
            menor_valor = numero;
        } else {
            if (numero > maior_valor) {
                maior_valor = numero;
            }

            if (numero < menor_valor) {
                menor_valor = numero;
            }
        }
    }

    media = (float)soma / quantidade;

    printf("\nO maior valor foi: %d\n", maior_valor);
    printf("O menor valor foi: %d\n", menor_valor);
    printf("A media final foi: %.2f\n", media);

    return 0;
}

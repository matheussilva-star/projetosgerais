#include <stdio.h>

int main () {

    float valor;
    float valor_com_desconto;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor > 250) {
        valor_com_desconto = valor - (valor * 0.10);
        printf("Valor com desconto: R$ %.2f", valor_com_desconto);
    }

    else {
        printf("Valor final: R$ %.2f", valor);
    }

    return 0;
}

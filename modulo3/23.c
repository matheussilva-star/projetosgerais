#include <stdio.h>

int main () {

    int quantidade_estoque;

    printf("Digite a quantidade de insumos atual: ");
    scanf("%d", &quantidade_estoque);

    if (quantidade_estoque >= 50) {
        printf("O armazem esta estavel");
    }

    else {
        printf("Alerta! O armazem necessita de reposicao de insumos.");
    }

    return 0;
}

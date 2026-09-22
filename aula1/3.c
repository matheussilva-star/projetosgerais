#include <stdio.h>

int main () {
    //Ler números repetidamente até o usuário digitar 0
    int numero;

    printf("\nDigite um numero ou 0 para sair: ");
    scanf("%d", &numero);

    while (numero != 0) {
        printf("Você digitou o numero %d\n", numero);

        printf("Digite outro numero ou 0 para sair: ");
        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");

    return 0;
}

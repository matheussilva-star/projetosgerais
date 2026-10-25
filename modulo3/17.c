#include <stdio.h>

int main () {

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade invalida");
    }

    else if (idade >= 18) {
        printf("Voce esta apto para abertura do processo de habilitacao veicular.");
    }

    else {
        printf("Voce nao esta apto para abertura do processo de habilitacao veicular.");
    }

    return 0;
}

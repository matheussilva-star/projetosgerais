#include <stdio.h>

int main () {

    float numerador;
    float denominador;
    float divisor;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    if (denominador != 0) {
        divisor = numerador / denominador;
        printf("Resultado: %.2f", divisor);
    }

    else {
        printf("Proibido a divisao por 0");
    }

    return 0;
}

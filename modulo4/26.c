#include <stdio.h>

int main() {

    float massa;
    float altura;
    float imc;

    printf("Digite seu peso: ");
    scanf("%f", &massa);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);  

    imc = massa / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Magreza\n");
    }

    else if (imc < 25.0) {
        printf("Adequado\n");
    }

    else if (imc < 30.0) {
        printf("Sobrepeso\n");
    }

    else {
        printf("Obesidade\n");
    }

    return 0;
}


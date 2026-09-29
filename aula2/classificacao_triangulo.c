#include <stdio.h>

int main() {
    //Triângulo isósceles, escaleno e equilátero

    int lado1, lado2, lado3;

    printf("Digite o lado 1: ");
    scanf("%d", &lado1);

    printf("Digite o lado 2: ");
    scanf("%d", &lado2);

    printf("Digite o lado 3: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Equilatero");
    }

    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Isosceles");
    }    

     else if (lado1 >= lado2 + lado3 ||
             lado2 >= lado1 + lado3 ||
             lado3 >= lado1 + lado2) {
        printf("Os valores nao formam um triangulo valido.");
    }
   
    else {
        printf("Escaleno");
    }

    return 0;
}

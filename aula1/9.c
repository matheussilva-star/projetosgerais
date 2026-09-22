#include <stdio.h>

int main () {//Ler duas notas e calcular a média
    float nota1, nota2, media;

    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0f;

    printf("Media: %.2f\n", media);

    return 0;
}

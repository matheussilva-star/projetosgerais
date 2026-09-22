#include <stdio.h>

    int main() {

    // Informar nome, idade e altura
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Idade informada: %d\n", idade);

    char nome[100];

    printf("\nDigite seu nome: ");
    scanf("%49s", nome);

    printf("Nome: %s\n", nome);

    float altura;

    printf("\nInforme sua altura: ");
    scanf("%f", &altura);

    printf("Altura informada: %.2f\n", altura);         

    return 0;

}

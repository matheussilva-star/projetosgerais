#include <stdio.h>
int main() {
char nome[50];
int idade;
float peso;
char genero;
printf("Digite o primeiro nome: ");
scanf("%49s", nome);
printf("Digite a idade: ");
scanf("%d", &idade);
printf("Digite o peso em kg: ");
scanf("%f", &peso);
printf("Digite a inicial do genero (M/F): ");
scanf(" %c", &genero);
printf("\n--- Dados cadastrados ---\n");
printf("Nome: %s\n", nome);
printf("Idade: %d anos\n", idade);
printf("Peso: %.2f kg\n", peso);
printf("Genero: %c\n", genero);
return 0;
}


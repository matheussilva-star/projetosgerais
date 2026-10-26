#include <stdio.h>
int main() {
int numero, contador = 0, soma = 0;
printf("Digite um numero inteiro (0 para encerrar): ");
scanf("%d", &numero);
while (numero != 0) {
soma = soma + numero;
contador++;
printf("Digite um numero inteiro (0 para encerrar): ");
scanf("%d", &numero);
}
printf("Quantidade de numeros: %d\n", contador);
printf("Somatorio: %d\n", soma);
return 0;
}

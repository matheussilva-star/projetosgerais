#include <stdio.h>
int main() {
int n, contador = 0;
printf("Digite um numero inteiro maior que 1: ");
scanf("%d", &n);
if (n <= 1) {
printf("O numero deve ser maior que 1.\n");
return 0;
}
while (n > 1) {
n = n / 2;
contador++;
}
printf("Quantidade de divisoes: %d\n", contador);
return 0;
}


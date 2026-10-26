#include <stdio.h>
int main() {
int k, i;
int pares = 0, impares = 0;
printf("Digite um numero inteiro positivo: ");
scanf("%d", &k);
if (k <= 0) {
printf("O numero deve ser positivo.\n");
return 0;
}
for (i = 1; i <= k; i++) {
if (i % 2 == 0) {
pares++;
} else {
impares++;
}
}
printf("Quantidade de pares: %d\n", pares);
printf("Quantidade de impares: %d\n", impares);
return 0;
}

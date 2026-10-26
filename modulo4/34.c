#include <stdio.h>
int main() {
int n, i;
float valor, soma = 0, media;
printf("Digite a quantidade de valores: ");
scanf("%d", &n);
if (n <= 0) {
printf("A quantidade deve ser maior que zero.\n");
return 0;
}
for (i = 1; i <= n; i++) {
printf("Digite o %d valor: ", i);
scanf("%f", &valor);
soma = soma + valor;
}
media = soma / n;
printf("Somatorio: %.2f\n", soma);
printf("Media aritmetica: %.2f\n", media);
return 0;
}

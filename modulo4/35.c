#include <stdio.h>
int main() {
int inicio, fim, passo, i;
printf("Digite o limite inferior: ");
scanf("%d", &inicio);
printf("Digite o limite superior: ");
scanf("%d", &fim);
printf("Digite o passo: ");
scanf("%d", &passo);
if (passo <= 0 || inicio > fim) {
printf("Limites ou passo invalidos.\n");
return 0;
}
printf("Percurso crescente: ");
for (i = inicio; i <= fim; i += passo) {
printf("%d ", i);
}
printf("\nPercurso decrescente: ");
for (i = fim; i >= inicio; i -= passo) {
printf("%d ", i);
}
printf("\n");
return 0;
}

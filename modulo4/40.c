#include <stdio.h>
int main() {
int a1, r, n, i, termo;
printf("Digite o primeiro termo: ");
scanf("%d", &a1);
printf("Digite a razao da PA: ");
scanf("%d", &r);
printf("Digite a quantidade de termos: ");
scanf("%d", &n);
if (n <= 0) {
printf("A quantidade de termos deve ser maior que zero.\n");
return 0;
}
printf("Progressao aritmetica: ");
for (i = 0; i < n; i++) {
termo = a1 + (i * r);
if (i > 0) {
printf(", ");
}
printf("%d", termo);
}
printf("\n");
return 0;
}

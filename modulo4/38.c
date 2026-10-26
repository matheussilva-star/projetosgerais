#include <stdio.h>
int main() {
int i, soma = 0;
printf("Numeros divisiveis por 3 e 5 entre 1 e 100:\n");
for (i = 1; i <= 100; i++) {
if (i % 3 == 0 && i % 5 == 0) {
printf("%d ", i);
soma = soma + i;
}
}
printf("\nSoma dos numeros: %d\n", soma);
return 0;
}

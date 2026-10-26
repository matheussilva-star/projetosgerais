#include <stdio.h>
int main() {
float nota;
printf("Digite uma nota entre 0 e 10: ");
scanf("%f", &nota);
while (nota < 0.0f || nota > 10.0f) {
printf("Nota invalida! Digite uma nota entre 0 e 10: ");
scanf("%f", &nota);
}
printf("Nota valida: %.2f\n", nota);
return 0;
}

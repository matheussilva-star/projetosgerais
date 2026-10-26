#include <stdio.h>
int main() {
int opcao;
float num1, num2;
printf("Digite a opcao (1 = Soma, 2 = Multiplicacao, 0 = Sair): ");
scanf("%d", &opcao);
while (opcao != 0) {
if (opcao == 1) {
printf("Digite dois numeros: ");
scanf("%f %f", &num1, &num2);
printf("Resultado da soma: %.2f\n", num1 + num2);
} else if (opcao == 2) {
printf("Digite dois numeros: ");
scanf("%f %f", &num1, &num2);
printf("Resultado da multiplicacao: %.2f\n", num1 * num2);
} else {
printf("Opcao invalida!\n");
}
printf("\nDigite a opcao (1 = Soma, 2 = Multiplicacao, 0 = Sair): ");
scanf("%d", &opcao);
}
printf("Sistema encerrado.\n");

return 0;
}


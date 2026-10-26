#include <stdio.h>
int main() {
float consumo, valor;
printf("Digite o consumo de energia em kWh: ");
scanf("%f", &consumo);
if (consumo <= 100) {
valor = consumo * 0.40;
} else if (consumo <= 250) {
valor = consumo * 0.65;
} else {
valor = consumo * 0.90;
}
valor = valor + 15.00;
printf("Valor total da conta: R$ %.2f\n", valor);
return 0;
}


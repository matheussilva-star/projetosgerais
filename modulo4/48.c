#include <stdio.h>
int main() {
int codigo, pagamento;
float preco, total = 0, desconto = 0;
float totalFinal, valorEntregue, troco;
printf("Digite o codigo do item (0 para encerrar): ");
scanf("%d", &codigo);
while (codigo != 0) {
printf("Digite o preco unitario: R$ ");
scanf("%f", &preco);
total = total + preco;
printf("Digite o codigo do item (0 para encerrar): ");
scanf("%d", &codigo);
}
printf("\nTotal bruto: R$ %.2f\n", total);
printf("Forma de pagamento (1 = Dinheiro, 2 = Cartao): ");
scanf("%d", &pagamento);
if (pagamento == 1) {
desconto = total * 0.05;
totalFinal = total - desconto;
printf("Desconto: R$ %.2f\n", desconto);
printf("Total com desconto: R$ %.2f\n", totalFinal);
printf("Valor entregue pelo cliente: R$ ");
scanf("%f", &valorEntregue);
if (valorEntregue >= totalFinal) {
troco = valorEntregue - totalFinal;
printf("Troco: R$ %.2f\n", troco);
} else {
printf("Valor entregue insuficiente.\n");
}
} else if (pagamento == 2) {
totalFinal = total;
printf("Pagamento com cartao.\n");
printf("Total a pagar: R$ %.2f\n", totalFinal);
} else {
printf("Forma de pagamento invalida.\n");
return 0;
}
printf("\n--- EXTRATO DA COMPRA ---\n");
printf("Total bruto: R$ %.2f\n", total);
printf("Desconto: R$ %.2f\n", desconto);
printf("Total final: R$ %.2f\n", totalFinal);
return 0;
}

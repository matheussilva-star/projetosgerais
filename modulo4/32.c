#include <stdio.h>
int main() {
float renda, parcela;
int inadimplente;
printf("Digite a renda mensal bruta: R$ ");
scanf("%f", &renda);
printf("Digite o valor da parcela: R$ ");
scanf("%f", &parcela);
printf("Possui inadimplencia ativa? (0 = nao, 1 = sim): ");
scanf("%d", &inadimplente);
if (parcela <= renda * 0.30 && inadimplente == 0) {
printf("Emprestimo aprovado.\n");
} else {
printf("Emprestimo recusado.\n");
}
return 0;
}

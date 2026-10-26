#include <stdio.h>

int main() {

    float horas;
    float valor_hora;
    float pagamento;

    printf("Digite a quantidade de horas semanais: ");
    scanf("%f", &horas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);

    if (horas > 40) {
        pagamento = (40 * valor_hora) +
                    ((horas - 40) * valor_hora * 1.50);

        printf("Pagamento total: R$ %.2f", pagamento);
    }

    else {
        pagamento = horas * valor_hora;
        printf("Pagamento total: R$ %.2f", pagamento);
    }

    return 0;
}

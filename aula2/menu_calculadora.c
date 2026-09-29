#include <stdio.h>

int main () {
    //Menu de calculadora

    int opcao;
    float num1, num2, resultado;

    while (1) {
        printf("\n===== CALCULADORA =====\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Saindo...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 4) {
            if (num2 == 0) {
                printf("Erro: nao e possivel dividir por zero!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
        }
        else if (opcao != 5) {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}

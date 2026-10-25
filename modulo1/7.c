#include <stdio.h>

int main () {

    char nome_circuito [50];
    float tensao_em_volts;
    int lote;
    char classe_eficiencia_energetica;

    printf("Digite o nome comercial do circuito: ");
    scanf("%49s", &nome_circuito);

    printf("Sua tensao em volts: ");
    scanf("%f", &tensao_em_volts);

    printf("Lote de fabricacao: ");
    scanf("%d", &lote);

    printf("Classe de eficiencia energetica: ");
    scanf(" %c", &classe_eficiencia_energetica);

    printf("\nNome comercial: %s", nome_circuito);
    printf("\nTensao: %.1f volts", tensao_em_volts);
    printf("\nLote: %d", lote);
    printf("\nClasse de eficiencia energetica: %c", classe_eficiencia_energetica);

    return 0;
}

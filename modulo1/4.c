#include <stdio.h>

int main() {

    int requisicoes_atendidas = 6;
    float consumo_relativo = 13.7;
    char estado_operacional = 'A';
    char protocolo_transporte[] = "10028CH10";

    printf(
        "Total de requisicoes atendidas: %d\n"
        "Consumo de memoria RAM: %.2f\n"
        "Estado operacional: %c\n"
        "Protocolo de transporte: %s\n",
        requisicoes_atendidas,
        consumo_relativo,
        estado_operacional,
        protocolo_transporte
    );

    return 0;
}

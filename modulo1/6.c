int main () {

    int numero_agencia = 19002872;
    int codigo_conta = 8810990013;
    float valor_liquidado = 137.99;
    char inicial_indicativa = 'I';

    printf(
        "Numero da agencia: %d\n\n"
        "Codigo da conta: %d\n\n"
        "Valor liquidado: %.2f\n\n"
        "Inicial indicativa: %c",
        numero_agencia,
        codigo_conta,
        valor_liquidado,
        inicial_indicativa
    );

    return 0;
}

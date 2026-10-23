#include <stdio.h>

int main () {

    float latitude = -23.5505;
    float longitude = -46.6333;
    char quadrante = 'S';
    int codigo_estacao = 1025;

    printf("%.4f | %.4f | %c | %d\n",
           latitude, longitude, quadrante, codigo_estacao);

    return 0;
}

#include <stdio.h>

int main () {
    //Contador de vogais e consoantes

    char texto[100];
    int vogais = 0;
    int consoantes = 0;
    int i;

    printf("Digite uma palavra: ");
    scanf("%49s", &texto);

    for (i = 0; texto[i] != '\0'; i++) {

        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u') {
            vogais++;
        }

        else if (texto[i] >= 'a' && texto[i] <= 'z' || texto[i] >= 'A' && texto[i] <= 'Z') {
            consoantes++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}

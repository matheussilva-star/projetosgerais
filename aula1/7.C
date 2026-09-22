#include <stdio.h>

int main () {

    //Ler uma idade e informar se a pessoa é maior ou menor de idade
    int idade;
    
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade");
    }

    else {
        printf("Menor de idade");
    }

    return 0;
}

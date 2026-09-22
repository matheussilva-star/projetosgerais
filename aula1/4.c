#include <stdio.h>

int main () {
    //Ler média e frequência e informar se o aluno foi aprovado
    float media, frequencia;

    printf("\nDigite a media: ");
    scanf("%f", &media);

    printf("Digite a frequencia: ");
    scanf("%f", &frequencia);

    if (media >= 6.0 && frequencia >= 75.0f) {
        printf("Aluno aprovado!\n");
    }

    else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}

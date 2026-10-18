#include <stdio.h>

int main () {

    int matricula;
    
    printf("Informe sua matricula: ");
    scanf("%d", &matricula);

    printf("Numero da matricula: %d", matricula);

    float altura;

    printf("\nDigite sua altura: ");
    scanf("%f", &altura);

    printf("Altura informada: %.2f", altura);

    char letra;

    printf("\nDigite a letra inicial do seu nome: ");
    scanf(" %c", &letra);

    printf("Letra inicial: %c", letra);

    char curso [50];

    printf("\nDigite o curso que esta matriculado: ");
    scanf("%49s", &curso);

    printf("Curso matriculado: %s", curso);

    return 0;
}

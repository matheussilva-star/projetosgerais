#include <stdio.h>

int main () {
    //Contagem de aprovados e reprovados

    int i;
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;
    int nota1, nota2;
    float media;

    for (i = 1; i <= 10; i++) {

        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%d", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%d", &nota2);

        media = (nota1 + nota2) / 2.0f;

        if (media >= 6) {
            aprovados++;
        }

        else if (media >= 4 && media < 6) {
            exame++;
        }

        else {
            reprovados++;
        }
        
    }

    printf("\nQuantidade de aprovados: %d", aprovados);
    printf("\nQuantidade em exames: %d", exame);
    printf("\nQuantidade de reprovados: %d", reprovados);
    
    return 0;
}

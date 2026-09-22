//Ler 5 notas usando for e informar quantas são maiores ou iguais a 6
    #include <stdio.h>

int main () {
    int i;
    int aprovados = 0;
    float nota;
    

    for (i = 1; i <= 5; i++) {

        printf("\nAluno %d\n", i);

        printf("\nDigite a nota: ", i);
        scanf("%f", &nota);

        if (nota >= 6) {
            aprovados++;
        }

        printf("\nQuantidade de notas maiores ou iguais a 6: %d\n", aprovados);       
    }

    return 0;
}

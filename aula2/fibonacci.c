#include <stdio.h>

int main() {
    int N;
    int a = 0, b = 1, proximo;

    printf("Quantos termos da sequencia de Fibonacci voce quer ver? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}

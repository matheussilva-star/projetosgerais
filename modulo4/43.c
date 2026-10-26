#include <stdio.h>
int main() {
int n, i;
float nota1, nota2, media, somaMedias = 0, mediaTurma;
printf("Digite a quantidade de alunos: ");
scanf("%d", &n);
if (n <= 0) {
printf("A quantidade de alunos deve ser maior que zero.\n");
return 0;
}
for (i = 1; i <= n; i++) {
printf("\nAluno %d\n", i);
printf("Digite a primeira nota: ");
scanf("%f", &nota1);
printf("Digite a segunda nota: ");
scanf("%f", &nota2);
media = (nota1 + nota2) / 2.0;
somaMedias = somaMedias + media;
printf("Media do aluno: %.2f\n", media);
if (media >= 6.0) {
printf("Aluno aprovado.\n");
} else {
printf("Aluno reprovado.\n");
}
}
mediaTurma = somaMedias / n;
printf("\nMedia geral da turma: %.2f\n", mediaTurma);
return 0;
}

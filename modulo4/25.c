#include <stdio.h>
int main() {
float media, frequencia;
printf("Digite a media semestral: ");
scanf("%f", &media);
printf("Digite o percentual de frequencia: ");
scanf("%f", &frequencia);
if (media >= 6.0 && frequencia >= 75.0) {
printf("Aluno aprovado!\n");
} else if (frequencia >= 75.0 && media >= 4.0 && media < 6.0) {
printf("Aluno em recuperacao.\n");
} else {
printf("Aluno reprovado.\n");
}
return 0;
}

#include <stdio.h>
int main() {
int idade, maiorIdade = 0, contador = 0;
float salario, somaSalarios = 0, mediaSalarial;
printf("Digite a idade (negativa para encerrar): ");
scanf("%d", &idade);
while (idade >= 0) {
printf("Digite o salario mensal: R$ ");
scanf("%f", &salario);
if (contador == 0 || idade > maiorIdade) {
maiorIdade = idade;
}
somaSalarios = somaSalarios + salario;
contador++;
printf("Digite a idade (negativa para encerrar): ");
scanf("%d", &idade);
}
printf("\nQuantidade de entrevistados: %d\n", contador);
printf("Maior idade: %d\n", maiorIdade);
if (contador > 0) {
mediaSalarial = somaSalarios / contador;
printf("Media salarial: R$ %.2f\n", mediaSalarial);
} else {
printf("Nenhum entrevistado foi registrado.\n");
}
return 0;
}

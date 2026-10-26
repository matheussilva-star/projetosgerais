#include <stdio.h> 
int main() { 
  int horas; float valorHora, salarioBruto, previdencia, impostoRenda, salarioLiquido; 
  printf("Digite a quantidade de horas trabalhadas: "); 
  scanf("%d", &horas); 
  printf("Digite o valor da hora trabalhada: R$ "); 
  scanf("%f", &valorHora); salarioBruto = horas * valorHora; previdencia = salarioBruto * 0.11; impostoRenda = salarioBruto * 0.05; salarioLiquido = salarioBruto - previdencia - impostoRenda; 
  printf("Salario bruto: R$ %.2f\n", salarioBruto); 
  printf("Desconto previdenciario (11%%): R$ %.2f\n", previdencia); 
  printf("Imposto de renda (5%%): R$ %.2f\n", impostoRenda); 
  printf("Salario liquido: R$ %.2f\n", salarioLiquido); 
  
    return 0; }

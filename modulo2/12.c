#include <stdio.h>

int main() {
  
float distancia, litros, precoLitro, rendimento, custoKm;
  
printf("Digite a distancia percorrida em km: ");
scanf("%f", &distancia);
  
printf("Digite o combustivel consumido em litros: ");
scanf("%f", &litros);
  
printf("Digite o preco do litro do combustivel: R$ ");
scanf("%f", &precoLitro);
  
rendimento = distancia / litros;
custoKm = (litros * precoLitro) / distancia;
  
printf("Rendimento: %.2f km/l\n", rendimento);
printf("Custo medio por km: R$ %.2f\n", custoKm);
  
return 0;
}

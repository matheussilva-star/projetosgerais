#include <stdio.h>
int main() {
float base, altura, area, perimetro;

printf("Digite a base do terreno em metros: ");
scanf("%f", &base);

printf("Digite a altura do terreno em metros: ");
scanf("%f", &altura);

area = base * altura;
perimetro = 2 * (base + altura);

printf("Area do terreno: %.2f m2\n", area);
printf("Perimetro do terreno: %.2f m\n", perimetro);

return 0;
}

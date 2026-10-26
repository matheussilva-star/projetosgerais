#include <stdio.h>
int main() {
float a, b, c;
printf("Digite o lado A: ");
scanf("%f", &a);
printf("Digite o lado B: ");
scanf("%f", &b);
printf("Digite o lado C: ");
scanf("%f", &c);
if (a > 0 && b > 0 && c > 0 &&
a < b + c && b < a + c && c < a + b) {
if (a == b && b == c) {
printf("Triangulo equilatero.\n");
} else if (a == b || a == c || b == c) {
printf("Triangulo isosceles.\n");
} else {
printf("Triangulo escaleno.\n");
}
} else {
printf("Os lados nao formam um triangulo.\n");
}
return 0;
}

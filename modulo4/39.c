#include <stdio.h>
int main() {
int i;
float temperatura, maior, menor;
for (i = 1; i <= 7; i++) {
printf("Digite a temperatura do dia %d: ", i);
scanf("%f", &temperatura);
if (i == 1) {
maior = temperatura;
menor = temperatura;
} else {
if (temperatura > maior) {
maior = temperatura;
}
if (temperatura < menor) {
menor = temperatura;
}
}
}
printf("Maior temperatura: %.2f C\n", maior);
printf("Menor temperatura: %.2f C\n", menor);
return 0;
}

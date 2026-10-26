#include <stdio.h>
int main() {
int n, i;
unsigned long long fatorial = 1;
printf("Digite um numero inteiro nao negativo (0 a 20): ");
scanf("%d", &n);
if (n < 0 || n > 20) {
printf("Digite um numero entre 0 e 20.\n");
return 0;
}
for (i = n; i >= 1; i--) {
fatorial = fatorial * i;
}
printf("%d! = %llu\n", n, fatorial);
return 0;
}

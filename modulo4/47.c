#include <stdio.h>
int main() {
int anos = 0;
double popA = 80000.0;
double popB = 100000.0;
while (popA <= popB) {
popA = popA * 1.03;
popB = popB * 1.015;
anos++;
}
printf("Anos necessarios: %d\n", anos);
printf("Populacao final do pais A: %.2f\n", popA);
printf("Populacao final do pais B: %.2f\n", popB);
return 0;
}


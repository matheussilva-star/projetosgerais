#include <stdio.h>
int main() {
  
int idade, contribuicao;
  
printf("Digite sua idade: ");
scanf("%d", &idade);
  
printf("Digite os anos de contribuicao: ");
scanf("%d", &contribuicao);
  
if (idade >= 65 || contribuicao >= 35) {
printf("Aposentadoria autorizada pelos criterios do exercicio.\n");
} 

else {
printf("Requisitos nao preenchidos.\n");
}
  
return 0;
}

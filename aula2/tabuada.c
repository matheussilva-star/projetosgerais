#include <stdio.h>

int main () {
    //Tabuada até o usuário pedir para parar

    int numero, i; 
    
        printf("Digite um numero para ver a tabuada ou digite 0 para sair: ");
        scanf("%d", &numero);        

    while (numero != 0) {       

        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
        
        printf("Digite outro numero ou 0 para sair: "); 
        scanf("%d", &numero);            

        
    }   

    printf("Programa encerrado.");

    return 0;
}

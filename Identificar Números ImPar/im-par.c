#include <stdlib.h>
#include <stdio.h>

int main (void) {
    
    // Variáveis
    int num;

    // Entrada
    printf("digite um numero inteiro: ");
    scanf("%d", &num);

    // Saída
    if(num %2 == 0) {
        printf("%i é um número par.", num);
    } else {
        printf("%i é um número ímpar.", num);
    } 

}

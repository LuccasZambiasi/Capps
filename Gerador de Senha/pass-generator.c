#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    // Variáveis
    int length;
    int num;
    int temp;

    // Entrada
    printf("Digite o tamanho da senha: ");
    scanf("%d", &length);

    printf("\nDigite a quantidade de senhas desejada: ");
    scanf("%d", &num);
    
   srand((unsigned int)(time(NULL)));
 
    // Saída
    while (num--) {
        temp = length;
        printf("\n");
        while(temp--) {
            putchar(rand() % 56 + 65);
            srand(rand());
        }
 
        temp = length;
    }
    printf("\n");
    
    // Fechamento
    return EXIT_SUCCESS;
}

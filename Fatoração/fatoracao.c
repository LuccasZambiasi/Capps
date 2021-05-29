#include <stdio.h>

int main() {

    // Variáveis
    int numero, i;

    // Entrada
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    // Saída
    printf("Os fatores de %d são: ", numero);
    for (i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }

    // Fechamento
    return 0;
}

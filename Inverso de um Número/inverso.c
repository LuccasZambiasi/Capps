#include <stdio.h>

void main() {
    // Variáveis
    float numero, calculo;

    // Entrada
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Saída
    if (numero > 0) {
        calculo = 1/numero;
        printf("O inverso de (%.0f) equivale a (%.4f).", numero, calculo);
    } else {
        calculo = -1*numero;
        printf("O oposto de (%.0f) equivale a (%0.f).", numero, calculo);
    }

    // Fechamento
    return 0;
}

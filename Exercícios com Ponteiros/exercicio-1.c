#include <stdlib.h>
#include <stdio.h>

// Main
int main() {
    // Variáveis
    float freq, per;
    int ret;

    // Entrada
    printf("-----------------------------------------\n");
    printf("Calculadora de Frequencia/Periodo - Zambiasi \n");
    printf("Ps: coloque zero (0) na variavel que deseja calcular.\n");
    printf("-----------------------------------------\n");

    printf("Entre com o valor da frequencia: ");
    scanf("%f", &freq);

    printf("\nEntre com o valor do periodo: ");
    scanf("%f", &per);

    // Saída
    ret = sinal(&freq, &per);
    if (ret != 0) {
        printf("Erro de parametros. Reinicie o programa e tente novamente.\n");
    } else {
        printf("Frequencia: %.2fHz \n", freq);
        printf("Periodo: %.2fs \n\n", per);
    }

    // Fechamento
    system("pause");
    return 0;
}

// Função para o Cálculo da Frequência / Período
int sinal(float *frequencia, float *periodo) {
    if (*periodo == 0 && *frequencia == 0) {
        return -1;
    }

    if (*periodo != 0 && *frequencia != 0) {
        return -2;
    }

    if (*periodo == 0) {
        *periodo = 1 / *frequencia;
        return 0;
    } else {
        *frequencia = 1 / *periodo;
        return 0;
    }

}


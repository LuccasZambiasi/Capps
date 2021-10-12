#include<stdio.h>

int main () {
    // Variáveis
    float n1, n2, n3;

    // Entrada
    printf("-----------------------------------------\n");
    printf("Ordenando Valores com Ponteiros - Zambiasi \n");
    printf("-----------------------------------------\n");

    printf("Entre com 3 valores reais (A B C): ");
    int resultado = scanf("%f %f %f", &n1, &n2, &n3);
    int temp = resultado;

    // Erro de Parâmetro
    if (resultado != 3) {
        printf("Erro de parametros. Reinicie o programa e tente novamente.\n");
        return -1;
    } 

    ordena(&n1, &n2, &n3);

    // Saida
    printf("\n");
    printf("Ordem crescente: %.1f -> %.1f -> %.1f \n", n1, n2, n3);
    printf("Ordem decrescente: %.1f -> %.1f -> %.1f \n\n", n3, n2, n1);

    // Fechamento
    return 0;
};

// Função para ordenar os valores
void ordena(float* x, float* y, float* z) {
    // Variável temporária
    float temp;

    // Cálculo
    if(*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    };
    if(*y > *z) {
        temp = *y;
        *y = *z;
        *z = temp;
    };
    if(*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    };

}; 

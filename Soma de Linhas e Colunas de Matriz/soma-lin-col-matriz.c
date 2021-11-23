#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Main
int main(void) {

    // Variáveis
    int tam = 5;
    int l, c, soma, mat[tam][tam], somaLinhas[tam], somaColunas[tam];

    // Gera um "clock" para toda vez que iniciar o programa, gerar uma matriz diferente
    srand(time(NULL));

    // Preenche a matriz com valores aleatórios < 10
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            mat[l][c] = rand() % 10;
        }
    }

    // Loop For-For para definir a variável de SomaLinhas
    for(l = 0; l < tam; l++) {
        // definimos soma = 0 para evitar lixo de cache
        soma = 0;
        for(c = 0;  c < tam; c++) {
            // Definimos soma com os valores totais da linha/coluna, somando com o 0 inicial.
            soma += mat[l][c];
        }
    // Define a LINHA L da somaLinhas como o valor de SOMA    
    somaLinhas[l] = soma;
    }

    // Loop For-For para definir a variável somaColunas
    for(c = 0; c < tam; c++) {
        // definimos soma = 0 para evitar lixo de cache
        soma = 0;
        for(l = 0;  l < tam; l++) {
            // Definimos soma com os valores totais da linha/coluna, somando com o 0 inicial.
            soma += mat[l][c];
        }
    // Define a COLUNA C da somaColunas com o valor de SOMA  
    somaColunas[c] = soma;
    }

    // Loop For-For para Printar a Matriz
    printf("\nMatriz:\n");
    for(l = 0; l < tam; l++){
        for(c = 0; c < tam; c++){
            // Printa a Matriz
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    // Printa a soma das linhas
    printf("\nSoma das Linhas: \n");
    for(l = 0; l < tam; l++) {
        // Printamos a respectiva linha com o respectivo valor
        printf("Linha [%d]: %d\n", l, somaLinhas[l]);
    }

    // Printa a soma das Colunas
    printf("\nSoma das Colunas: \n");
    for(c = 0; c < tam; c++) {
        // Printamos a respectiva coluna com o respectivo valor
        printf("Coluna [%d]: %d\n", c, somaColunas[c]);
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

// Main
int main(void) {
    // Variáveis
    // tam = tamanho da matriz 20x20
    // mat[tam][tam] = matriz ORIGEM do tamanho [tam][tam] (20x20)
    // matPar[tam][tam] = matriz PAR do tamanho [tam][tam] (20x20)
    // matImpar[tam][tam] = matriz IMPAR do tamanho [tam][tam] (20x20)
    int tam = 20;
    int mat[tam][tam], matPar[tam][tam], matImpar[tam][tam];

    // Gera um "clock" para toda vez que iniciar o programa, gerar uma matriz diferente
    srand(time(NULL));

    // Loop For-For para definir e printar a matriz origem no display
    printf("\nOrigem:\n");
    for(int l = 0; l < tam; l++) {
        for(int c = 0; c < tam; c++) {
            // Randomiza a Matriz Origem com valores menores que 100
            mat[l][c] = rand() % 100;
            printf("%2d   ", mat[l][c]);
        }
        printf("\n");
    }

    // Loop "For-For" para as linhas e colunas das matrizes Par e Impar
    for(int l = 0; l < tam; l++) {
        for(int c = 0; c < tam; c++) {
            // Divide os valores da matriz origem (mat[l][c]) por 2, limitando os pares
            if(mat[l][c] %2 == 0) {
                // Define a matriz par com os valores pares da matriz origem
                matPar[l][c] = mat[l][c];
                // Define os valores iniciais da matriz impar como 0
                matImpar[l][c] = 0;
            } else {
                // Define a matriz impar com os valores impares da matriz origem
                matImpar[l][c] = mat[l][c];
                // Define os valores que sobraram da matriz par como 0
                matPar[l][c] = 0;  
            }
        }
    }

    // Printa a Matriz Par no Display com o Loop For-For
    printf("\nMatriz Par: \n");
    for(int l = 0; l < tam; l++) {
        for(int c = 0; c < tam; c++) {
            printf("%2d   ", matPar[l][c]);
        }
        printf("\n");
    }

    // Printa a Matriz Impar no Display com o Loop For-For
    printf("\nMatriz Impar: \n");
    for(int l = 0; l < tam; l++) {
        for(int c = 0; c < tam; c++) {
            printf("%2d   ", matImpar[l][c]);
        }
        printf("\n");
    }

    // Espaçamento Final
    printf("\n");
}

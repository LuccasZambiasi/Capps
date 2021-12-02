#include <stdio.h>
#include <stdlib.h>

// Main
int main(void) {

    // Variáveis
    // tam = tamanho da matriz 7x7 (inclui bordas)
    int tam = 7;

    // l = linha; c = coluna
    // mat[tam][tam] = matriz do tipo INT do tamanho [tam][tam] (7x7)
    int l, c, mat[tam][tam], soma, somaLinhas[tam], somaColunas[tam];

    // Gera um "clock" para toda vez que iniciar o programa, gerar uma matriz diferente
    srand(time(NULL));

    // preenche a matriz gerando valores aleatórios
    for(l = 0; l < tam; l++) {
        for(c = 0;  c< tam; c++) {
            // randomiza e "seta" os valores da L e C no máximo até 10 
            mat[l][c] = rand() % 10;

            // Define a primeira borda
            if(l == 0) {
                mat[l][c] = 0;
            }

            // Define a segunda borda
            if(l == tam-1) {
                mat[l][c] = 0;
            }

            // Define a terceira borda
            if(c == 0) {
                mat[l][c] = 0;
            }
            
            // Define a quarta borda
            if(c == tam-1) {
                mat[l][c] = 0;
            }

            /*
            EXTRA

            Mostrando as diagonais na própria matriz.

            EXTRA
            */
            // Define a Diagonal Principal como (0)
            if (l == c) {
                mat[l][c] = 0;
            }

            // Define a Diagonal Secundária como (0)
            if (c == tam -1 -l) {
                mat[l][tam - 1 - l] = 0;
            }

            // Printa a Matriz no terminal
            // Utilizado %2d para o espaçamento correto de 2 termos
            printf("%2d ", mat[l][c]); // 2 digitos %2d
        }
        printf("\n");
    }

    /* Raciocínio: Escrever a matriz no formato

    5x5
    COLUNAS     0  1  2  3  4
    LINHAS   0  4  8  3  0  5 -> 0,0  l = 0; c = 0  
             1  8  2  3  4  1 -> 1,1  l = 1; LOGO, c = l
             2  7  1  4  6  7 -> 2,2  l = 2, c = l
             3  6  5  4  3  2 -> 3,3
             4  1  2  4  3  6 -> 4,4
    */

    // Printamos a diagonal principal na tela
    printf("\n\nDiagonal principal: ");
    // Loop "For" com 1 < tam-1 para excluir a borda (não mostrar a borda como parte da diagonal)
    for(l = 1; l < tam-1; l++){
        // Se C = L, definimos o C como L no mat[l][l]
        printf("%d ", mat[l][l]);
    }

    /* Raciocinio: Escrever a matriz no formato

    5x5
    COLUNAS     0  1  2  3  4
    LINHAS   0  4  8  3  0  5 -> 0,4  l = 0, PRECISAMOS DEFINIR O C em uma fórmula --> c = tam - 1
             1  8  2  3  4  1 -> 1,3  l = 1, A FORMULA NÃO FUNCIONA NESSE, LOGO, TESTAMOS: c = tam - 1 - l
             2  7  1  4  6  7 -> 2,2
             3  6  5  4  3  2 -> 3,1
             4  1  2  4  3  6 -> 4,0
    */
    
    // Printa a diagonal secundaria na tela
    printf("\n\nDiagonal secundaria: ");
    for(l = 1; l < tam-1; l++) {
        // Definimos o C = TAM - 1 - L no mat[l][tam-1-l]
        printf("%d ", mat[l][tam - 1 - l]);
    }
    printf("\n\n");
}


#include <stdio.h>
#include <stdlib.h>

int main() {
  // Variáveis (matrizes)
  int matA[5][5], matB[5][5];

  // Base
  preencherMatriz(matA);
  transpor(matA, matB);

  // Saída
  printf("Matriz Base:\n\n");
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
        printf("[%i][%i] = %i      ", x, y, matA[x][y]);
    }
    printf("\n");
  }

  printf("\nMatriz Transposta:\n\n");
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      printf("[%i][%i] = %i      ", x, y, matB[x][y]);
    }
    printf("\n");
  }

  // Fechamento
  return 0;
}

// Função para preenchimento da matriz A (usuário não precisar digitar os valores)
void preencherMatriz(int a[5][5]) {

  // Loop "For-For" para passar por todos valores no formato colunas (x) e linhas (y).
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      // Randomizando os valores..
      a[x][y] = rand() % 50;
    }
  }
}

// Função para transpor a matriz (inverter colunas x linhas)
void transpor(int a[5][5], int b[5][5]) {
  // Loop "For-For" para passar por todos valores no formato colunas (x) e linhas (y).
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      // Invertendo os valores de X e Y
      b[x][y] = a[y][x];
    }
  }
}

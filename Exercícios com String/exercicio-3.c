#include <stdlib.h>
#include <stdio.h>

int main() {
  // Variáveis
  char s[30];
  
  // Entrada
  printf("Digite uma frase (maximo 30 caracteres)\n");
  gets(s);

  // Saída
  escreve_palavras(s);

  // Fechamento
  system("pause");
  return 0;
}

// Funções usada para o Exercício 3
void escreve_palavras(char string[]) {

  printf("\n");

  // Variável
  int tamanhoString = tamanhoDaString(string);

  // Cálculo & Retorno
  for (int i = 0; i < tamanhoString; i++) {
    if (string[i] == ' ') {
      printf("\n");
    } else {
      printf("%c", string[i]);
    }
  }
}

int tamanhoDaString(char str[]) {

  // Variáveis
  int tamanho = 0;

  // Verificação do Tamanho
  for (int a = 0; a < 255; a++) {
    if (str[a] == '\0')
      break;
    tamanho++;
  }
  
  // Retorno
  return tamanho;
}

#include <stdlib.h>
#include <stdio.h>

int main() {
  // Variáveis  
  char string[50];

  // Entrada
  printf("Insira uma string de ate 50 caracteres\n");
  gets(string);

  // Saída
  printf("\nString digitada: %s", string);
  inverte_e_mostra(string);  

  // Fechamento
  system("pause");
  return 0;
}

// Funções usadas para o Exercício 1
void inverte_e_mostra(char str[]) {

  // Variáveis
  int strlen = tamanhoDaString(str);

  // Adaptação da String do Usuário
  for (int i = 0; i < strlen / 2; i++) {
    char temp = str[i];
    str[i] = str[strlen - i - 1];
    str[strlen - i - 1] = temp;
  }
  
  // Retorno
  printf("\nString ao contrario: %s \n", str);
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

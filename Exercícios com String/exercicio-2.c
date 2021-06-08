#include <stdlib.h>
#include <stdio.h>

int main() {
  // Variáveis
  char first_string[50], second_string[50];

  // Entrada da 1a String 
  printf("Entre com a 1a string (ate 50 caracteres):\n");
  gets(first_string);

  // Entrada da 2a String 
  printf("\nEntre com a 2a string (ate 50 caracteres):\n");
  gets(second_string);


  // Salvando o Tamanho da String
  int first_string_length = tamanhoDaString(first_string);
  int second_string_length = tamanhoDaString(second_string);
 
  // Retorno
  printf("\nA primeira string tem (%i) de tamanho e a segunda tem (%i) caracteres.", first_string_length, second_string_length);
  concatena_e_mostra(first_string, second_string, first_string_length, second_string_length);

  // Fechamento
  system("pause");
  return 0;
}

// Funções usadas para o Exercício 2
void concatena_e_mostra(char str1[], char str2[], int strleng1, int strleng2) {

  // Variável  
  char conc_strings[100];
  
  // Adaptação da String do Usuário
  for (int i = 0; i < strleng1; i++) {
    conc_strings[i] = str1[i];
  }

  for (int j = 0; j < strleng2; j++) {
    conc_strings[strleng1 + j] = str2[j];
  }

  conc_strings[strleng1 + strleng2] = '\0';

  // Retorno
  printf("\nA concatenacao das duas strings fica: %s \n", conc_strings);
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

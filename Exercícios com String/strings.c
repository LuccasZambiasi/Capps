#include <stdlib.h>
#include <stdio.h>

int main() {

  // Inicializa o Exercício 1  
  printf("<=-=> Exercicio 1 <=-=> \n");
  exercicioUm();

  // Inicializa o Exercício 2
  printf("<=-=> Exercicio 2 <=-=> \n");
  exercicioDois();

  // Inicializa o Exercício 3
  printf("<=-=> Exercicio 3<=-=> \n");
  exercicioTres();

  // Fechamento
  system("pause");
  return 0;
}

/* ------------ Exercícios -------------- */

// Exercício 1 
void exercicioUm() {

  // Variáveis  
  char string[50];

  // Entrada
  printf("Insira uma string (ate 50 caracteres)\n");
  gets(string);

  // Saída
  printf("\nString digitada: %s", string);
  inverte_e_mostra(string);
}

// Exercício 2
void exercicioDois() {

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
  printf("\nA primeira string tem %i caracteres de tamanho e a segunda tem %i", first_string_length, second_string_length);
  concatena_e_mostra(first_string, second_string, first_string_length, second_string_length);
}

// Exercício 3
void exercicioTres() {

  // Variáveis
  char s[30];
  
  // Entrada
  printf("Digite uma frase (maximo 30 caracteres)\n");
  gets(s);

  // Saída
  escreve_palavras(s);
}

/* --------------- Funções usadas pros exercícios ------------------ */

// Função usada para o Exercício 3
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

// Função usada para o Exercício 2
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
  printf("\nA concatenacao das duas strings fica: %s", conc_strings);
}

// Função usada para o Exercício 1 e 2
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

// Função usada para o Exercício 1
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
  printf("\nAo contrario, a string digitada fica: %s", str);
}

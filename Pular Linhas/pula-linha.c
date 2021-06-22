#include <stdio.h>

int main() {
  // Variáveis
  char s[50]; 

  // Entrada
  printf("Digite uma palavra ou frase (maximo de 50c): ");
  gets(s);

  // Retorno
  pula_linha(s);

  // Encerramento
  system("pause");
  return 0;
}

// Função para escrever a palavra pulando a linha
void pula_linha(char string[]) {
  int temp = 0;

  for (int i = 0; i <= 50; i++) {
    if (string[i] == '\0') {
        break;   
    }
    for (int j = 0; j <= 50; j++) {
      if (j > temp) {
        break;
      }
      if (string[j] == '\0') {
        break;
      }
      printf("%c", string[j]);
    }
    temp++;
    printf("\n");
  }
}

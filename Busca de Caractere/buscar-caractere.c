#include <stdio.h>

int main() {

  // Variáveis
  char s[100];
  char busca;
  int loop = 0;

  // Entrada
  printf("Escreva uma frase ou palavra (maximo de 100 caracteres)\n");
  gets(s);

  printf("\nDigite um caractere para buscar: ");
  scanf("%c", &busca);

  printf("\n");

  // Cálculo
  for (int i = 0; i < 100; i++) {
    if (s[i] == '\0')
      break;

    if (s[i] == busca)
      loop++;
  }
 
  // Retorno
  printf("O caractere (%c) aparece (%i) vezes na sua string", letra, loop);
  return 0;
}

#include <stdio.h>

int main() {

  // Variáveis
  int n, i, flag = 0;

  // Entrada
  printf("Digite um número positivo: ");
  scanf("%d", &n);

  // Cálculo
  for (i = 2; i <= n / 2; ++i) {
    // Condição para não ser primo
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // Saída
  if (n == 1) {
    printf("O número 1 não é nem primo nem composto.");
  } else {
    if (flag == 0)
      printf("%d é um número primo .", n);
    else
      printf("%d não é um número primo.", n);
  }

  // Fechamento
  return 0;
}

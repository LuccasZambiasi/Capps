#include<stdio.h>

int main() {

  // Variáveis
  int fatorial, x;
  
  // Entrada
  printf("Digite um valor para calcular seu fatorial:");
  scanf("%d", &x) ;

  // Cálculo
  for(fatorial = 1; x > 1; x--) {
      fatorial = fatorial * x;
  }

  // Saída
  printf("Fatorial: %d", fatorial);

  // Fechamento
  return 0;
}

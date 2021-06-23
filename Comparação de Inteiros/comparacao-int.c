#include <stdio.h>

int main() {
   // Variáveis
   int a, b;

   // Entrada
   printf("Digite um valor para A: ");
   scanf("%d", &a);

   printf("Digite um valor para B: ");
   scanf("%d", &b);

   // Retorno
   if(a > b)
      printf("A e maior que B.");
   else
      printf("A nao e maior que B.");

   // Fechamento
   return 0;
}

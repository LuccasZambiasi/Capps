#include <stdlib.h>
#include <stdio.h>

int main (void) {

   // Variáveis
   int vetor[51] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
   int t, op1, op2, op3;

   // Saída
   for (t=1; t < 51; t++) {
       if (t%2 == 0) {
          // Números pares
          op1 = vetor[t]/2;
          printf("v[%i] = %i \n", t, op1);
       } else {
          // Números ímpares
          op2 = vetor[t]-1;
          op3 = op2*2;
          printf("v[%i] = %i \n", t, op3);
       }
   }
}

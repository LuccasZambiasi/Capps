#include<stdio.h>
#include<stdlib.h>

// Main
int main(void) {
  // Variáveis
  int num1, num2, valores, op1, op2, op3, op4;

  // Entrada da Nota 1
  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);

  // Entrada da Nota 2
  printf("Digite o segundo valor: ");
  scanf("%d", &num2);
  
  //
  op1 = soma(num1, num2);
  printf("Soma: %d\n", op1);

  op2 = subtracao(num1, num2);
  printf("Subtracao: %d\n", op2);

  op3 = multiplicacao(num1, num2);
  printf("Multiplicacao: %d\n", op3);

  op4 = divisao(num1, num2);
  printf("Divisao: %d\n", op4);

  // Fechamento
  system("pause");
  return 0;
}

// Função Soma
int soma(int a, int b) {
    int calculo;
    calculo = a + b;

    return(calculo);
}

// Função Subtração
int subtracao(int a, int b) {
    int calculo;
    calculo = a - b;

    return(calculo);
}

// Função Multiplicação
int multiplicacao(int a, int b) {
    int calculo;
    calculo = a * b;

    return(calculo);
}

// Função Divisão
int divisao(int a, int b) {
    int calculo;
    calculo = a / b;

    return(calculo);
}

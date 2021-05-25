#include<stdio.h>
#include<stdlib.h>

// Main
int main(void) {
  // Variáveis
  int num1, num2, valores, calculo;

  // Entrada da Nota 1
  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);

  // Entrada da Nota 2
  printf("Digite o segundo valor: ");
  scanf("%d", &num2);
  
  // Escolha da Operação
  printf("------------------------------\n");
  printf("Calculadora em C\n");
  printf("1 - Soma\n");
  printf("2 - Subtracao\n");
  printf("3 - Multiplicacao\n");
  printf("4 - Divisao\n");
  printf("------------------------------\n");
  printf("Escolha a operacao desejada: ");
  scanf("%d", &valores);
  while (valores < 0 || valores > 4) {
    do {
        printf("Escolha invalida, tente novamente: ");
        scanf("%d",&valores);
    } while (valores < 0 || valores > 4);  
  }
  // Retorno
  switch (valores) {
    case 1:
      calculo = soma(num1, num2);
      printf("Resultado da Soma: %d\n", calculo);
    break;

    case 2:
      calculo = subtracao(num1, num2);
      printf("Resultado da Subtracao: %d\n", calculo);
    break;

    case 3:
      calculo = multiplicacao(num1, num2);
      printf("Resultado da Multiplicacao: %d\n", calculo);
    break;

    case 4:
      calculo = divisao(num1, num2);
      printf("Resultado da Divisao: %d\n", calculo);
    break;
    }

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
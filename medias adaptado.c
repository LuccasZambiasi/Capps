#include<stdio.h>
#include<stdlib.h>

int main(void) {

  // Variáveis
  float nota1, nota2, nota3, media;
  
  do {
      printf("Digite a 1a nota do aluno (de 1 a 10): ");
      scanf("%f",&nota1);
      printf("\n");
  } while (nota1 < 0 || nota1 > 10);

  do {
      printf("Digite a 2a nota do aluno (de 1 a 10): ");
      scanf("%f",&nota2);
      printf("\n");
  } while (nota2 < 0 || nota2 > 10);

  do {
      printf("Digite a 3a nota do aluno (de 1 a 10): ");
      scanf("%f",&nota3);
      printf("\n");
  } while (nota3 < 0 || nota3 > 10);
  
  // Cálculo
  media = (nota1 + nota2 + nota3)/3;

  // Saída
  if (media < 6) {
      printf("Status: Insuficiente \n");
  } else if (media > 5 && media < 8) {
      printf("Status: Mediocre \n");
  } else if (media >= 8) {
      printf("Status: Excelente \n");
  }

  printf("Media do aluno = %.1f\n", media);

  // Fechamento
  system("pause");
  return 0;
}
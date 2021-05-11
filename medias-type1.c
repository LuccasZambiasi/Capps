#include<stdio.h>
#include<stdlib.h>

int main(void) {

  // Variáveis
  float nota1, nota2, nota3, media;
  
  // Entrada
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  if (nota1 < 0 || nota1 > 10) {
      printf("ERRO: Nota invalida.");
      return(0);
  }

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  if (nota2 < 0 || nota2 > 10) {
      printf("ERRO: Nota invalida.");
      return(0);
  }

  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&nota3);
  if (nota3 < 0 || nota3 > 10) {
      printf("ERRO: Nota invalida.");
      return(0);
  }
  
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

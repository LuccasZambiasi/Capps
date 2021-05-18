#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {

  // Variáveis
  float nota1, nota2, nota3;
  int media;
  
  // Entrada da Nota 1
  printf("Digite a 1a nota do aluno (de 1 a 10): ");
  scanf("%f",&nota1);
  while (nota1 < 0 || nota1 > 10) {
    do {
        printf("Nota inválida, tente novamente: ");
        scanf("%f",&nota1);
    } while (nota1 < 0 || nota1 > 10);  
  }

  // Entrada da Nota 2
  printf("Digite a 2a nota do aluno (de 1 a 10): ");
  scanf("%f",&nota2);
  while (nota2 < 0 || nota2 > 10) {
    do {
        printf("Nota inválida, tente novamente: ");
        scanf("%f",&nota2);
    } while (nota2 < 0 || nota2 > 10);  
  }

  // Entrada da Nota 3
  printf("Digite a 3a nota do aluno (de 1 a 10): ");
  scanf("%f",&nota3);
  while (nota3 < 0 || nota3 > 10) {
    do {
        printf("Nota inválida, tente novamente: ");
        scanf("%f",&nota3);
    } while (nota3 < 0 || nota3 > 10);  
  }
  
  // Cálculo

  media = (nota1 + nota2 + nota3)/3;

 switch (media) {
    case 1:
      printf("Status: asdasddas \n");
    break;

    case 2:
      printf("Status: Insuficiente \n");
    break;

    case 3:
      printf("Status: Insuficiente \n");
    break;

    case 4:
      printf("Status: Insuficiente \n");
    break;

    case 5:
      printf("Status: Insuficiente \n");
    break;

    case 6:
      printf("Status: Mediocre \n");
    break;

    case 7:
      printf("Status: Mediocre \n");
    break;

    case 8:
      printf("Status: Excelente \n");
    break;
    
    case 9:
      printf("Status: Excelente \n");
    break;

    case 10:
      printf("Status: Excelente \n");
    break;
 }
  printf("Media do aluno = %d\n", media);

  // Fechamento
  system("pause");
  return 0;
}
#include <stdio.h>

int main() {
  // Variáveis
  char string[50]; // String do usuário
  int temp = 0; // Variável para contar quantas letras teremos que printar

  // Entrada
  printf("Digite uma palavra: ");
  gets(string);

  /* 
  Pra printar cada letra da string, vamos usar um for dentro de um for para que o primeiro
  seja para as linhas e o segundo seja a quantidade de letras pra printar.
  */
  for (int i = 0; i <= 50; i++) {
    // "Breakar" o código caso a string já tenha acabado
    if (string[i] == '\0')
      break;  
    /*
    2o For: verificamos se J ja for maior que a quantidade de letras que
    queremos printar, se sim, voltamos para o 1o for. 
    Depois fiz mais uma verificação se acabou a string pelo \0, e aí printei no caractere da string
    com o valor de J, pois assim ele vai printar todas letras até o j ser maior que a 
    quantidade de letras que queremos printar. 
    Quando terminar de printar o 2o For, ele breaka pro 1o For, aumentando o número de letras
     que vamos mostrar depois, e vamos para uma nova linha com \n
    */
    for (int j = 0; j <= 50; j++) {
      if (j > temp)
        break;
      if (string[j] == '\0')
        break;
      printf("%c", string[j]);
    }
    temp++;
    printf("\n");
  }

  system("pause");
  return 0;
}

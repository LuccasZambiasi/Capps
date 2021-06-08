#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis
    char frase[50];
    int i;
    int cont = 0;
    
    // Entrada
    printf("Insira uma frase (maximo de 100 caracteres)\n");
    fgets(frase,51,stdin);
    
    // Verificação de Palavras
    for(i = 0; i<strlen(frase); i++) {
      // A 'isspace(int ch)' retorna um valor != 0, se ch for um espaço, caso contrário, retorna 0
      if(isspace(frase[i]) != 0) {
        cont++;  
      }   
    }

    // Retorno     
    printf("A frase digitada tem (%d) palavras! \n",cont);
    
    // Fechamento
    system("pause");
    return 0;
}

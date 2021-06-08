#include <stdlib.h>
#include <stdio.h>

int main (void) {

    // Entrada
    char str[100];
    int x, teste=0, palavras=0;

    // Entrada
    printf("Insira uma frase (maximo de 100 caracteres)\n");
    fgets(str, 101, stdin);

    // Verificação da Qntd de Palavras
    for(x = 0; str[x] != '\0'; x++) {
	    if(!teste && str[x]!=' ') {
            // A 'teste' determina quando está contando uma palavra (teste = 1) e quando não está (teste = 0)
		    teste=1;
		    palavras++;
	    } else if(teste && str[x]==' ')
		teste=0;
    }

    // Retorno
    printf("O numero de palavras da string digitada ficou: %d\n", palavras);

    // Fechamento
    system("pause");
    return 0;
}

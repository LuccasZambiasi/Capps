#include <stdio.h>
#include <string.h>

int main() {
	
	// Variáveis
	char string[255];
	int i, j, tam;
	
	// Entrada
	printf("Digite uma palavra ou frase: ");
	gets(string);
	
	// Retorno
	tam = strlen(string);
	
	for (i=0; i < tam; i++) {
		for (j=0; j <= i; j++) {
			printf("%c", string[j]);
		}
		printf("\n");
	}
	
	// Fechamento
	return 0;
}

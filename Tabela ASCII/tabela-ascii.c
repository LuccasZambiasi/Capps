#include <stdio.h>

int main () {
    // Variáveis
	int x;

    // Tabela (base)
	printf("Char\t");
	printf("Dec\t");
	printf("Hex\t");
	printf("\n");
	
    // Tabela (conteúdo)
	for(x = 32; x <= 255; x++) {
	    printf("%c\t", x);
		printf("%d\t", x);
		printf("%x\t", x);
		printf("\n");
	}	
    
    // Fechamento
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
    
    // Variáveis
    int vet[6];
    
    int main() {
     
      // Entrada
      int i;
      for (i=0; i<5; i++){   
        printf("Digite os vetores para ordenar: ");
        scanf("%d", &vet[i]);
      }

      // Saída
      ordena();
      for (i=0; i<5; i++){
        printf("Vetores ordenados: %d \n", vet[i]);
      }

      // Fechamento
      system("pause");
    } 
 
    // Função para Ordenar os Vetores
    void ordena() {       
        int i, j, aux;
            for( i=0; i<5; i++ ){
                 for( j=i+1; j<5; j++ ){
                      if( vet[i] > vet[j] ){
                          aux = vet[i];
                          vet[i] = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
            printf("Ordenado com sucesso! \n");
    }

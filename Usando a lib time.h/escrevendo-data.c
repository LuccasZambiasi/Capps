#include <stdio.h>
#include <time.h> 

int main(void) {

  // Variáveis 
  struct tm *data_hora_atual;     
  time_t segundos;  
  time(&segundos);   
  
  // Conversão de Segundos para o tempo local 
  data_hora_atual = localtime(&segundos);  

  // Retorno
  printf("Dia do ano...: %d\n", data_hora_atual->tm_yday); 
  printf("Dia da semana: %do\n", data_hora_atual->tm_wday);

  printf("\nHora: %d:",data_hora_atual->tm_hour); // Hora   
  printf("%d \n",data_hora_atual->tm_min);// Minuto
  
  printf("Data: %d/", data_hora_atual->tm_mday); // Dia
  printf("%d/",data_hora_atual->tm_mon+1); // Mês
  printf("%d\n",data_hora_atual->tm_year+1900); // Ano
  
  // Fechamento
  return 0;
}

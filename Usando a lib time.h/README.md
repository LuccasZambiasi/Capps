# Usando a lib time.h

## Proposta

Criar um programa usando a biblioteca `time.h` que informe o dia do ano, o dia da semana, a data e hora atual.

## Resolução

Criação das Variáveis
1. Crio um `struct` tm para armazenar a data e hora: ``struct tm *data_hora_atual;``
2. Crio uma variável do tipo `time_t` para salvar o tempo em seg: ``time_t segundos;``

Após, obtenho o tempo em segundos com a função `time` e a salvo na variável² criada (&segundos). Em seguida, converto os segundos para o tempo local com a função localtime (salvando na struct data_hora_atual¹): ``  data_hora_atual = localtime(&segundos);``
Agora basta acessar os membros da struct, formatá-los e printar para o usuário, podemos fazer isso usando ``data_hora_atual->membro_da_struct``, ficando:.
```c
  // Retorno
  printf("Dia do ano...: %d\n", data_hora_atual->tm_yday); 
  printf("Dia da semana: %do\n", data_hora_atual->tm_wday);

  printf("\nHora: %d:",data_hora_atual->tm_hour); // Hora   
  printf("%d \n",data_hora_atual->tm_min);// Minuto
  
  printf("Data: %d/", data_hora_atual->tm_mday); // Dia
  printf("%d/",data_hora_atual->tm_mon+1); // Mês
  printf("%d\n",data_hora_atual->tm_year+1900); // Ano
```

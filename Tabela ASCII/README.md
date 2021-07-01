# Tabela ASCII

## Proposta

A criação de um programa que mostre a tabela de caractéres ASCII.

## Resolução

Vamos lá, primeiramente eu preciso criar uma variável para meu programa, criei x do tipo `int` para fazer um loop.
Pra deixar o programa em loop e fazer o cálculo, vou utilizar um laço ``for`` com os parâmetros: ``x = 32; x <= 255; x++``, iniciando x em 32 pois é na posição 32 da tabela que inicia-se os caractéres comuns (A, B, C, ..) mas, se desejar, pode iniciar no zero que aparecerá também os emojis do ASCII. Limitamos também para que x seja menor ou igual a 255 pois é onde acaba a tabela (255 = 8 bits = 1 byte = fim da tabela). Assim, com as opções %c (caractére), %d (decimal) e %x (hexadecimal) printamos a tabela para o usuário:
```c
printf("Char\t");
printf("Dec\t");
printf("Hex\t");
printf("\n");
  
for(x = 32; x <= 255; x++) {
  printf("%c\t", x);
  printf("%d\t", x);
  printf("%x\t", x);
  printf("\n");
}	
```

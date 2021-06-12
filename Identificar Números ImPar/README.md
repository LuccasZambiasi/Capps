# Identificar Números ImPar

## Proposta

A criação de um programa no qual o usuário digite um número inteiro e o programa informe se ele é par ou ímpar.

## Resolução

Vamos lá, primeiramente eu preciso criar uma variável para meu programa:

- num do tipo `int` para armazenar o número dado pelo usuário.

Primeiro pedimos para que o usuário digite o número e escaneamos-o com `scanf`, definindo ele na variável &num.
Para fazer a verificação se o número é par ou ímpar, usamos um `if` e verificamos se o resto da divisão por 2 é igual a 0 (`num %2 == 0`) pois, se for, significa que ele é par.  
Assim, printamos com o ``printf`` se ele é par ou ímpar.

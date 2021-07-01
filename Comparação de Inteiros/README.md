# Comparação de Inteiros

## Proposta

A criação de um programa no qual o usuário digite dois valores e o programa retorne se o primeiro é maior que o segundo. 

## Resolução

- Declaramos as variáveis do tipo int ``a, b`` para armazenar, respectivamente: o primeiro e o segundo número digitado.

Primeiro pedimos para que o usuário digite os dois valores e o-escaneamos com o `scanf`. Após, com um ``if`` fazemos uma comparação ``a > b`` e printamos com o ``printf``.
```c
if(a > b)
  printf("A e maior que B.");
else
  printf("A nao e maior que B.");
```

# Fatoração

## Proposta

A criação de um programa no qual o usuário digite um número e o programa identifique e retorne a fatoração dele.

## Resolução

Vamos lá, primeiramente eu preciso criar as variáveis para meu programa

- numero e i do tipo `int` para armazenar o número dado pelo usuário e a conta.

Primeiro pedimos para que o usuário digite o número e escaneamos-o com `scanf`, definindo ele na variável &numero.
Pra deixar o programa em loop e fazer o cálculo, vou utilizar um laço For.

Dentro do laço For, criamos condições para identificar a fatoração, e, para isso: definimos `i = 1` e `i <= numero` aumentando uma unidade em `i` e, se, o resto da divisão por ``numero / i`` for igual a zero, significa que ele será possível fazer a fatoração. 

Depois, printamos usando o ``printf`` o resultado.

# Números Primos

## Proposta

A criação de um programa no qual o usuário digite um número e o programa identifique e retorne se ele é um número primo ou não.

## Resolução

Vamos lá, primeiramente eu preciso criar as variáveis para meu programa

- n, i e flag=0 do tipo `int` para armazenar o número dado pelo usuário e a conta.

Primeiro pedimos para que o usuário digite o número e escaneamos-o com `scanf`, definindo ele na variável &n.
Pra deixar o programa em loop e fazer o cálculo, vou utilizar um laço For.

Dentro do laço For, criamos condições para verificar se o número é primo ou não, e, para isso: definimos `i = 2` e `i <= n/2` e, se, o resto da divisão por ``n / 1`` for diferente de zero, significa que ele é primo. 

Depois, printamos com o ``printf`` o resultado.

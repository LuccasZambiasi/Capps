# Fatorial

## Proposta

A criação de um programa no qual o usuário digite um número e o programa identifique e retorne o fatorial dele.

## Resolução

Vamos lá, primeiramente eu preciso criar as variáveis para meu programa

- fatorial e x do tipo `int` para armazenar o número dado pelo usuário e a conta.

Primeiro pedimos para que o usuário digite o número e escaneamos-o com `scanf`, definindo ele na variável &x.
Pra deixar o programa em loop e fazer o cálculo, vou utilizar um laço For.

Dentro do laço For, criamos condições para realizar o cálculo, e, para isso: definimos `fatorial = 1` e `x > 1` e para cada unidade, reduzimos x em 1 unidade com ``x--``. Após, redefinimos a variável fatorial como ``fatorial = fatorial * x`` para obter o resultado do fatorial.

Depois, printamos usando o ``printf``.

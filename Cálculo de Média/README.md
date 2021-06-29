# Cálculo de Média

## Proposta

A criação de um programa no qual o usuário digite três notas de 1 a 10, calcule a média aritmética entre os 3 valores e, caso a nota for menor que 6, dar como insuficiente, se for entre 6 e 8, mediocre e maior que 8 seja excelente.

## Variáveis

1. Usando somente `if`.
2. Usando sometne `do while`.
3. Usando `while` e `do while`.
4. Usando `while`, `do while` e `switch case`.

## Resolução

- Declaramos as variáveis nota1, nota2, nota3 e media do tipo `float` para armazenar as notas e o cálculo delas.

Primeiro pedimos para que o usuário digite a primeira nota e escaneamos-o com `scanf`, definindo ele na variável &nota1. Após, verificamos¹ se ele está entre 0 e 10, se estiver, continua o programa, digitando as próximas duas notas (fazendo a verificação¹ também).

Para fazer o cálculo, usamos a fórmula `media = (nota1 + nota2 + nota3)/3;`

Depois do cálculo, damos o resultado ao usuário com um `printf` e dependendo do resultado do cálculo exibe uma mensagem do status (insuficiente, mediocre ou excelente).

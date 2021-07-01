# Contador de Palavras com Strings

## Proposta

A criação de um programa no qual o usuário digite dois valores e o programa retorne as operações matemáticas básicas para aqueles dois valores (Adição, divisão, multiplicação e divisão).

## Variáveis

1. O usuário escolhendo a operação que ele deseja;
2. Retornando todas as operações de uma vez;

## Resolução (1)

- Declaramos as variáveis do tipo int ``num1, num2, valores, calculo`` para armazenar, respectivamente: o primeiro número digitado, o segundo número digitado, a operação que o usuário desejada e o cálculo feito.

Inicialmente, usando o `scanf` escaneamos os dois valores ``num1`` e ``num2`` do usuário, em seguida, definimos os valores de 1 a 4 para as operações matemáticas e escaneamos o valor que o usuário digitar. Se for diferente desses 4 valores, reescaneamos o que o usuário digitar.
```c
printf("Escolha a operacao desejada: ");
scanf("%d", &valores);
while (valores < 0 || valores > 4) {
  do {
    printf("Escolha invalida, tente novamente: ");
    scanf("%d",&valores);
  } while (valores < 0 || valores > 4);  
}
```
Agora, caso o usuário tenha digitado o valor da operação, verificamos qual ele digitou com um switch case e retornamos a operação com os dois números ``num1`` e ``num2`` pelas funções criadas.
```c
switch (valores) {
  case 1:
    calculo = soma(num1, num2);
    printf("Resultado da Soma: %d\n", calculo);
  break;

  case 2:
    calculo = subtracao(num1, num2);
    printf("Resultado da Subtracao: %d\n", calculo);
  break;
  [...]
}
```
Para fazer as funções, como é necessário retornar um valor, vamos usar o tipo `int` e como parâmetros, colocamos duas variáveis `int` para serem os números e, simplesmente fazemos o cálculo com ``calculo = a + b``. Isso para todas funções.
```c
int soma(int a, int b) {
    int calculo;
    calculo = a + b;

    return(calculo);
}
```

## Resolução (2)

- Declaramos as variáveis do tipo int ``num1, num2, valores, op1, op2, op3 e op4`` para armazenar, respectivamente: o primeiro número digitado, o segundo número digitado, as operações do usuário.

Inicialmente, usando o `scanf` escaneamos os dois valores ``num1`` e ``num2`` do usuário, em seguida, retornamos os resultados com um `printf`.
```c
op1 = soma(num1, num2);
printf("Soma: %d\n", op1);

op2 = subtracao(num1, num2);
printf("Subtracao: %d\n", op2);

[...]
```

Pode-se usar as mesmas funções criadas na Resolução (1).


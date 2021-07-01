# Inverso de um Número

## Proposta

A criação de um programa que o usuário informe um valor e o programa mostre o inverso dele.

## Conceito

Pela matemática, o inverso de um número equivale a 1/(x) sendo que, caso ele for negativo, precisamos fazer -1*(x).

## Resolução

Vamos lá, primeiramente eu precisamos criar duas variáveis o programa, criei ``numero, calculo`` ambas do tipo `float` para armazenar números reais. Após, pedimos para que o usuário digite um número e o-escaneamos com o scanf:
```c
printf("Digite um numero: ");
scanf("%f", &numero);
```

Para inverter o número, primeiro precisamos verificar se ele é ou não maior que zero (pois muda a forma de fazer), então, fazemos um ``if (numero > 0) { [x] } else { [y] }`` 
Caso for maior que zero, definimos nossa variável ``calculo`` como ``1/numero`` e o printamos para o usuário. Caso contrário, fazemos a mesma coisa, porém, definindo ``calculo`` para ``-1*numero``.
```c
if (numero > 0) {
  calculo = 1/numero;
  printf("O inverso de (%.0f) equivale a (%.4f).", numero, calculo);
} else {
  calculo = -1*numero;
  printf("O oposto de (%.0f) equivale a (%0.f).", numero, calculo);
}
```


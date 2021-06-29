# Usando vetores

## Proposta

1. Criar um programa que o usuário digite 5 números inteiros e o programa ordene ele no formato crescente.
2. A criação de um vetor de 50 números onde, para números pares o programa retorne o valor do vetor dividido por 2 e para ímpares, multiplicado.
 
## Resolução (1)

Criamos as variáveis `i` e `vet[6]` do tipo `int`.
Após, usando o laço `for` pedimos para que o usuário digite os 5 vetores e escaneamos com a função `scanf` e em seguida puxamos a função `ordena`.
```c
for (i=0; i<5; i++){   
  printf("Digite os vetores para ordenar: ");
  scanf("%d", &vet[i]);
}
```

Na função ordena criamos três variáveis do tipo int: i, j, aux. Usando o laço for colocamos condições para ordenar os vetores.
```c
void ordena() {       
  int i, j, aux;
  for( i=0; i<5; i++ ){
    for( j=i+1; j<5; j++ ){
      if( vet[i] > vet[j] ){
      aux = vet[i];
      vet[i] = vet[j];
      vet[j] = aux;
      }
    }
  }
  printf("Ordenado com sucesso! \n");
}
```

Após chamar a função ordena, usando novamente o laço For, printamos os vetores, agora, ordenados.
```c
for (i=0; i<5; i++){
  printf("Vetores ordenados: %d \n", vet[i]);
}
```

## Resolução (2)

Criamos as variáveis `t`, `op1`, `op2`, `op3` e `vetor[51] = {0, 1, 2, 3, ...}` do tipo `int`. 
Após, fazemos um for da variável `t` para fazer a listagem do vetor com ``for (t=1; t < 51; t++)``. Nisso, dentro do laço, precisamos identificar se o número é par ou não, logo, para isso, verificamos se o resto da divisão por 2 dá zero com ``t%2 == 0`` e se for usamos a variável op1 dividindo o vetor criado por 2. Caso contrário, usaremos as variáveis op2 e op3 para fazer a multiplicação de forma correta e printamos o resultado, como:.
```c
for (t=1; t < 51; t++) {
  if (t%2 == 0) {
  // Números pares
  op1 = vetor[t]/2;
  printf("v[%i] = %i \n", t, op1);
  } else {
  // Números ímpares
  op2 = vetor[t]-1;
  op3 = op2*2;
  printf("v[%i] = %i \n", t, op3);
  }
}
```


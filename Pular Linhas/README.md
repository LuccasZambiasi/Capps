# Pular Linhas

## Proposta

A criação de um programa no qual o usuário digite uma palavra/frase, e, o programa retorne-a passando cada caractére em uma nova linha.

## Variações de Código

1. Usando a lib `string.h`.
2. Não usando a lib `string.h`.

## Resolução (1)

- Declaramos as variáveis i, j e tam do tipo `int` e a variável string do tipo `char` para, respectivamente:
1. i = variável crescente para o 1o laço de repetição For;
2. j = variável crescente para o 2o laço de repetição For;
3. tam = variável para armazenar o tamanho da string;
4. string = variável para armazenar a string a ser digitada pelo usuário;

Inicialmente, pedimos para que o usuário digite a string, a escaneamos com a função `gets` e com a variável tam usamos a função `strlen()` para obter o tamanho da string:

```c
printf("Digite uma palavra ou frase: ");
gets(string);

tam = strlen(string);
```

Para fazer com que cada letra seja digitada em uma linha, fazemos um laço de repetição for dentro de outro laço for, colocando as condições:
1. i inicialmente é zero, e, enquanto i for menor que o tamanho da string, somamos +1 a i. Isso para ler cada caractére da string.
2. j inicialmente é zero, e, enquanto j for menor ou igual a i, adicionamos +1 a j. Isso para a string final ficar (A AB ao invés de A B).

E dentro do segundo laço for, printamos o caractére atual, enquanto, no primeiro, printamos o pulo de linha.

```c
for (i=0; i < tam; i++) {
  for (j=0; j <= i; j++) {
    printf("%c", string[j]);
  }
  printf("\n");
}
```

### Resolução (2)

- Declaramos a variável s do tipo `char` com 50 caractéres para armazenar a string digitada pelo usuário.

Após, escaneamos a string digitada com a função `gets`.
```c
char s[50]; 

printf("Digite uma palavra ou frase (maximo de 50c): ");
gets(s);
```

Agora criamos a função `pula_linha` do tipo `void` (pois não queremos que retorne nenhum valor) e com um parâmetro: um `char` de nome string.
Dentro da função, criamos uma variável do tipo `int` temp para poder contar quantas letras temos que printar.
```c
int temp = 0;
```

Iremos iniciar loopando a função com um for `for` que irá printar a palavra inteira, sem pular para novas linhas. Adicionei um break no `for` pra breckar o código caso a string tenha acabado (identificado pelo \0).
```c
for (int i = 0; i <= 50; i++) {
    if(string[i] == '\0') break;
    printf("%c", string[i])
    temp++;
}
```

Pra printarmos cara letra da string, vamos fazer um `for` dentro desse `for`, para o primeiro `for` seja as linhas e o segundo seja a quantidade de letras pra printar.
```c
for (int i = 0; i <= 50; i++) {
    if (string[i] == '\0')
      break;
    for (int j = 0; j <= 50; j++) {
      if (j > temp)
        break;
      if (string[j] == '\0')
        break;
      printf("%c", string[j]);
    }
    temp++;
    printf("\n");
}
```

No segundo ``for``, verificamos se ``j`` for maior que a quantidade de letras, se sim, voltamos para o primeiro `for` com o break. Assim, iremos para a segunda verificação, que, verifica se acabou a string, aí printamos no caractere da string com o valor de j, para printar todas as letras até que o J seja maior que a quantidade que queremos. Assim, quando o programa termina o print do segundo laço for, ele breaka voltando para o primeiro laço, aumentando o número de letras que vamos mostrar, e, pulamos para uma nova linha com o \n.



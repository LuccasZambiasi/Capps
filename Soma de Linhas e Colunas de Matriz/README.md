# Soma de Linhas e Colunas de Matriz

## Proposta

A criação de um programa no qual haja uma matriz 5x5 aleatória e mostre a soma das linhas e colunas da mesma.

## Resolução


### Gerando a Matriz com as Bordas

- Declaramos as variáveis do tipo int ``tam = 5, l, c, soma, mat[tam][tam], somaLinhas[tam], somaColunas[tam]`` para armazenar, respectivamente: o tamanho da matriz (5x5), linha, coluna, uma variável para definir a soma, a matriz do tamanho anteriormente definido, a soma de linhas (do tamanho anterior) e a soma de colunas (do tamanho anterior também).

Inicialmente, utilizamos a função `srand(time(NULL))` para gerar um "clock" para toda vez que iniciar o programa, gerar uma matriz randômica diferente.

Após, usando um lop `For-For` (para a linha e coluna), com a função `rand` definimos os valores da matriz (limitados a 10) e printamos na tela.
```c
    // preenche a matriz gerando valores aleatórios
for(l = 0; l < tam; l++) {
  for(c = 0;  c< tam; c++) {
    // randomiza e "seta" os valores da L e C no máximo até 10 
    mat[l][c] = rand() % 10;

    // Printa a Matriz no terminal
    // Utilizado %2d para o espaçamento correto de 2 termos
    printf("%2d ", mat[l][c]); // 2 digitos %2d
  }
  printf("\n");
}
```

### Definindo a soma das Linhas

Agora, para fazer a soma das linhas, utilizamos um Loop `For-For` (L->C) para percorrer toda matriz. Dentro do primeiro `For`, para evitar lixo de cache, definimos a variável `soma` como 0 e no segundo For, definimos ela como a soma dos valores da matriz.
Após, definimos a linha da variável `somaLinhas` como a soma feita anteriormente.
```c
    // Loop For-For para definir a variável de SomaLinhas
    for(l = 0; l < tam; l++) {
        // definimos soma = 0 para evitar lixo de cache
        soma = 0;
        for(c = 0;  c < tam; c++) {
            // Definimos soma com os valores totais da linha/coluna, somando seus valores.
            soma += mat[l][c];
        }
    // Define a LINHA L da somaLinhas como o valor de SOMA    
    somaLinhas[l] = soma;
    }
```
### Definindo a soma das Colunas

Para fazer a soma das colunas, é mesmo raciocinio das linhas, porém, inversamente: utilizamos um Loop `For-For` (C->L) para percorrer toda matriz. Dentro do primeiro `For`, para evitar lixo de cache, definimos a variável `soma` como 0 e no segundo For, definimos ela como a soma dos valores da matriz.
Após, definimos a linha da variável `somaColunas` como a soma feita anteriormente.
```c
    // Loop For-For para definir a variável somaColunas
    for(c = 0; c < tam; c++) {
        // definimos soma = 0 para evitar lixo de cache
        soma = 0;
        for(l = 0;  l < tam; l++) {
            // Definimos soma com os valores totais da linha/coluna, somando com o 0 inicial.
            soma += mat[l][c];
        }
    // Define a COLUNA C da somaColunas com o valor de SOMA  
    somaColunas[c] = soma;
    }
```

### Mostrando os Valores

Tendo as variáveis `somaLinhas` e `somaColunas` definidas, precisamos fazer um loop `For` para respectivamente, as linhas e colunas, e printar os valores de ambos com um `printf`.
```c
    // Printa a soma das linhas
    printf("\nSoma das Linhas: \n");
    for(l = 0; l < tam; l++) {
        // Printamos a respectiva linha com o respectivo valor
        printf("Linha [%d]: %d\n", l, somaLinhas[l]);
    }

    // Printa a soma das Colunas
    printf("\nSoma das Colunas: \n");
    for(c = 0; c < tam; c++) {
        // Printamos a respectiva coluna com o respectivo valor
        printf("Coluna [%d]: %d\n", c, somaColunas[c]);
    }
    printf("\n");
```

E assim, completamos o programa.


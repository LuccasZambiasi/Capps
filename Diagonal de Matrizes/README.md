# Diagonal de Matrizes

## Proposta

A criação de um programa no qual haja uma matriz 5x5 aleatória, com bordas (0) e mostre sua diagonal principal e secundária.
Extra: a soma das linhas e colunas da matriz anteriormente criada.

## Resolução


### Gerando a Matriz com as Bordas

- Declaramos as variáveis do tipo int ``tam = 7, l, c, mat[tam][tam]`` para armazenar, respectivamente: o tamanho da matriz (7 pelas bordas, + 1 coluna/linha de cada lado), linha, coluna e a matriz do tamanho anteriormente definido.

Inicialmente, utilizamos a função `srand(time(NULL))` para gerar um "clock" para toda vez que iniciar o programa, gerar uma matriz randômica diferente.

Após, usando um lop `For-For` (para a linha e coluna), com a função `rand` definimos os valores da matriz (limitados a 10), definimos as bordas dela e printamos na tela.
```c
    // preenche a matriz gerando valores aleatórios
for(l = 0; l < tam; l++) {
  for(c = 0;  c< tam; c++) {
    // randomiza e "seta" os valores da L e C no máximo até 10 
    mat[l][c] = rand() % 10;

    // Define a primeira borda
    if(l == 0) {
      mat[l][c] = 0;
    }

    // Define a segunda borda
    if(l == tam-1) {
      mat[l][c] = 0;
    }

    // Define a terceira borda
    if(c == 0) {
      mat[l][c] = 0;
    }
            
    // Define a quarta borda
    if(c == tam-1) {
      mat[l][c] = 0;
    }

    // Printa a Matriz no terminal
    // Utilizado %2d para o espaçamento correto de 2 termos
    printf("%2d ", mat[l][c]); // 2 digitos %2d
  }
  printf("\n");
}
```

### Definindo a Diagonal Principal

Agora, para fazer a primeira diagonal, precisamos achar uma lógica para o valor de C que nos permita definir a borda, temos as opções: ``tam, l``. Por isso, segue o raciocínio:
```c
/* Raciocínio: Escrever a matriz no formato

    5x5
    COLUNAS     0  1  2  3  4
    LINHAS   0  4  8  3  0  5 -> 0,0  l = 0; c = 0  
             1  8  2  3  4  1 -> 1,1  l = 1; LOGO, c = l
             2  7  1  4  6  7 -> 2,2  l = 2, c = l
             3  6  5  4  3  2 -> 3,3
             4  1  2  4  3  6 -> 4,4
    */
```

Sabendo que para definir a diagonal principal basta perceber que `c = l`, printamos ela em um loop `For`.
```c
// Printamos a diagonal principal na tela
printf("\n\nDiagonal principal: ");
// Loop "For" com 1 < tam-1 para excluir a borda (não mostrar a borda como parte da diagonal)
for(l = 1; l < tam-1; l++){
  // Se C = L, definimos o C como L no mat[l][l]
  printf("%d ", mat[l][l]);
}
```

### Definindo a Diagonal Secundária

Seguindo a mesma lógica da diagonal principal, precisamos achar um valor de C que nos permita criar um padrão para a secundária, e, temos em mão as variáveis `tam, l`.
```c
/* Raciocinio: Escrever a matriz no formato

    5x5
    COLUNAS     0  1  2  3  4
    LINHAS   0  4  8  3  0  5 -> 0,4  l = 0, PRECISAMOS DEFINIR O C em uma fórmula --> c = tam - 1
             1  8  2  3  4  1 -> 1,3  l = 1, A FORMULA NÃO FUNCIONA NESSE, LOGO, TESTAMOS: c = tam - 1 - l
             2  7  1  4  6  7 -> 2,2  l = 2, c = (5 - 1 - 2 = 2)
             3  6  5  4  3  2 -> 3,1
             4  1  2  4  3  6 -> 4,0
             
             OBS: Utilizamos tam = 5 pois em sequência no Loop FOR limitamos o tamanho de TAM removendo as bordas dele (para não contar na diagonal), ficando uma matriz "bruta" 5x5.
    */
```

E assim, com o loop for, printamos na tela:
```c
// Printa a diagonal secundaria na tela
printf("\n\nDiagonal secundaria: ");
for(l = 1; l < tam-1; l++) {
  // Definimos o C = TAM - 1 - L no mat[l][tam-1-l]
  printf("%d ", mat[l][tam - 1 - l]);
}
printf("\n\n");
```

E assim, completamos o programa.

### Extra: soma de colunas e linhas da matriz criada.

Adição no programa: foi adicionado o "diagonal-de-matriz-2.c" que adicionei a soma de colunas e linhas da matriz criada na primeira proposta. Código/raciocínio comementado no próprio programa.


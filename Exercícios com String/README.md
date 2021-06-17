# Exercícios Sobre Strings

## Proposta

São três exercícios sobre strings cujos quais não pode usar funções da biblioteca `<string.h>` e, criar as próprias funções para tal, sendo:

1. Criar um programa que lê uma string e a escreve. Após, escrever a mesma string inversamente.

2. Criar um programa que lê duas strings e informa o tamanho, a igualdade entre elas e no final escrever as strings concatenadas.

3. Criar um programa que lê uma string str\[30\]. Após, escrever cada palavra da string em uma nova linha.

## Resolução

Na `string.c` há as três 3 funções (que também estão separadas por exercício 1, 2 e 3 no Github), dividindo elas dizendo qual é cada exercício. Cada função é um exercício diferente. Comecaremos pelo exercicio um.

### Exercício 1

```c
  // Variáveis  
  char string[50];

  // Entrada
  printf("Insira uma string de ate 50 caracteres\n");
  gets(string);

  // Saída
  printf("\nString digitada: %s", string);
  inverte_e_mostra(string);  
```

Criamos um char aray de 50 valores, que será a `string`. Em seguida, executo o `gets`, que recebe como parâmetro um vetor de char. Essa função é um `scanf` de strings. Como pedido no primeiro exercício, mostramos na tela qual é a string, e em seguida chamo minha função para inverter.

A função `inverte_e_mostra` é do tipo `void` e recebe um array como parâmetro, A primeira coisa que ela faz é criar um `int` chamado strle, que chama a função `tamanhoDaString`. Vamos ver o que essa função faz antes de continuar.

```c
int tamanhoDaString(char str[]) {

  // Variáveis
  int tamanho = 0;

  // Verificação do Tamanho
  for (int a = 0; a < 255; a++) {
    if (str[a] == '\0')
      break;
    tamanho++;
  }
  
  // Retorno
  return tamanho;
}
```

A tamanhoDaString é uma função que retorna um `int` e recebe uma string como parâmetro, ela primeiro cria uma variável chamada `tamanho` que vai armazenar o tamanho de nossa string. Então, criei um laço **for** para "loopar" por toda string. Coloquei para loopar 255x, ja que a string terá menos que isso. Dentro do for, ele faz uma checagem para saber se está no fim da string, já que o último valor de uma string sempre é `\0`, eu checo que o valor de `str` atual, ou seja, `str[a]` é '\0', como `a` é minha variável do loop, ele sempre vai aumentar o valor de acordo com o loop. Caso o valor de `str[a]` for '\0', o loop vai breakar, ou seja, o código vai pular pra fora do loop.  E caso ele não pule, ele vai aumentar o valor de `tamanho` em +1. Assim, quando passar por toda string, tamanho vai ser a quantidade de char da string, ou seja,  o tamanho da string. Retorno isso para a função com `return tamanho`.

Agora que temos strlen, podemos criar um loop para correr por toda string. A leitura do loop ficou assim: **i é igual a 0, e enquanto i for igual à metade do tamanho da string, some 1 à i**. Eu peço somente à metade do tamnho da String pois para inverter uma string só precisamos passar metade dos caracteres para depois do meio. para invertermos a string, faremos um processo chamado `swap`, que só vamos swapar os chars. Então criaremos uma variável temporaria com o caracter atual, em seguida settaremos o caractere atual com a localização inversa da string desse caracter, e por fim, vamos colocar o caractere aual na localização da inversa. E pronto, esse foi o swap. Como não é possível retornar uma função com um vetor, vamos printar direto na função inverte, por isso que é chamada de inverte_e_mostra. Printamos a invertida e ta lá, primeira questão Resolvida!

### Exercício 2

Criamos dois arrays com tamanho 50 cada um, e fazer `gets` para pegar o valor de cada array. Usarmos a função já explicada `tamanhoDaString` para pegar o tamanho de cada uma das duas strings, e vamos armazenar isso em inteiros. Como pedido pela questão, printaremos o tamanho de cada string, e em seguida, vamos concatená-las. (Concatenar é uma palavra bonita para juntar).

```c
void concatena_e_mostra(char str1[], char str2[], int strleng1, int strleng2) {

  // Variável  
  char conc_strings[100];
  
  // Adaptação da String do Usuário
  for (int i = 0; i < strleng1; i++) {
    conc_strings[i] = str1[i];
  }

  for (int j = 0; j < strleng2; j++) {
    conc_strings[strleng1 + j] = str2[j];
  }

  conc_strings[strleng1 + strleng2] = '\0';

  // Retorno
  printf("\nA concatenacao das duas strings fica: %s \n", conc_strings);
}
```

A função `concatena_e_mostra` recebe 4 parâmetros, duas strings, e o tamanho dessas strings. Na primeira linha criamos uma nova string com 100 de tamanho. Para juntarmos as duas, vamos loopar entre as duas strings, e ir adicionando na nova. O primeiro **for** loopa entre toda string 1, e armazena na `conc_strings`, o segundo **for** loopa entre toda a segunda string, e na hora de adicionar na conc_strings, ele leva em consideração o tamanho da primeira string, para adicionar os caracteres depois da primeira. Depois dos dois loops, adiciono o '\0' no fim da string para settar que aquele é o final. Por fim, printo na tela o resultado da concatenação.

### Exercício 3

Pedimos para o usuário digitar uma string de no máximo 30 caracteres, que vai ser armazenada no `char s[30]` com a função `gets`. Então, chamamos a função `escreve_palavras` que fará a escrita de cada palavra da string em uma linha diferente.

```c
void escreve_palavras(char string[]) {

  printf("\n");

  // Variável
  int tamanhoString = tamanhoDaString(string);

  // Cálculo & Retorno
  for (int i = 0; i < tamanhoString; i++) {
    if (string[i] == ' ') {
      printf("\n");
    } else {
      printf("%c", string[i]);
    }
  }
}
```

A função `escreve_palavras` recebe a string e armazenamos o tamanho dela no `int tamanhoString` a partir da função `tamanhoDaString`. Então, com um laço **for** eu passo por todos caracteres da string, e verifico se o caractere atual for um espaço em branco (_' '_), se for, printamos uma nova linha, caso contrario, printamos cada caractere na linha atual. 

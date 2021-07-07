# Estruturas

## Proposta

A criação de um programa que:

1. Permita ao usuário entrar com os dados de até 10 alunos;
2. Exiba a matrícula, nome e nota do aluno com maior nota na primeira prova, na segunda prova e na terceira prova;
3. Encontre e escreva o nome do aluno, sua notas e média para o aluno com maior média geral;
4. Encontre e escreva o nome do aluno, sua notas e média para o aluno com menor média geral;
5. Para cada aluno, escreva seu nome e média e informe se ele foi aprovado ou reprovado, considerando média 6 para aprovação.


## Requisitos de Funcionamento (opcional)
1. Biblioteca ``locale.h``.

## Resolução

Inicialmente, criei 4 estruturas, sendo:
1. Ficha (para 10 alunos): com uma variável do tipo `int` matricula, um `char[50]` e três do tipo `float` (prova1, prova2, prova3) para, armazenar, respectivamente: o
número de matricula dos 10 alunos, o nome deles (com no máximo 50 caractéres) e a nota das três provas.
2. MelhoresNotas (considerando a melhor nota da prova 1, 2 e 3): com uma variável do tipo `int` alunoID e um float `nota` para, respectivamente: armazenar o número do
aluno e a sua nota para as três provas.
3. MediaNotas: com uma variável do tipo `int` alunoID e um float `media` para, respectivamente: armazenar o número do aluno e a sua media.
4. MediaAlunos: com duas variáveis do tipo `struct` (se referindo a struct anterior, MediaNotas) pior e melhor para, respectivamente: armazenar o aluno com pior/maior nota.

```c
struct ficha {
    int matricula;
    char nome[50];
    float prova1, prova2, prova3;
} alunos[10];

struct melhoresNotas {
    int alunoID;
    float nota;
} melhorProva1, melhorProva2, melhorProva3;

struct mediaNotas {
    int alunoID;
    float media;
};

struct mediaAlunos {
    struct mediaNotas pior;
    struct mediaNotas melhor;
} media;
```

### Função para a entrada dos dados

Agora, criamos uma função do tipo `int` para a entrada dos dados (nome, matricula e as notas dos alunos) e, dentro dela, criamos duas variáveis, uma do tipo `char`
add pois, como é ATÉ dez alunos, ser possível colocar menos e a variável do tipo `int` totalAlunos = 0, para, ir aumentando conforme o usuário adiciona os alunos.
Após, criamos um loop do tipo `do while` para loopar a criação de alunos e o usuário poder colocar quantos quiser (até 10), sendo que, pedimos para ele preencher os dados (matricula,
nome, nota da prova 1, nota da prova 2 e nota da prova 3), escaneamos com o `scanf` e com um loop `do while` para limitar as notas de 0 a 10. Após, perguntamos ao 
usuário se ele deseja adicionar mais alunos com um `if`, se sim, breaka o código, aumenta +1 no total de alunos e repete a parte de preenchimento dos dados. 

```c
if (totalAlunos != 0) {
  printf("\nAdicionar mais alunos? (S/N)");
  scanf("%c", &add);

  if (add == 'N') {
  break;
  }
}

printf("\nDigite a matricula do aluno: ");
scanf("%i", & alunos[totalAlunos].matricula);
fflush(stdin);

printf("\nDigite o nome do aluno: ");
gets(alunos[totalAlunos].nome);

printf("\nDigite a primeira nota do aluno: ");
scanf("%f", & alunos[totalAlunos].prova1);

while (alunos[totalAlunos].prova1 < 0 || alunos[totalAlunos].prova1 > 10) {
  do {
    printf("Nota (1) invalida, tente novamente: ");
    scanf("%f", & alunos[totalAlunos].prova1);
  } while (alunos[totalAlunos].prova1 < 0 < 0 || alunos[totalAlunos].prova1 > 10);  
}

totalAlunos++;
```

Para finalizar a função, como é do tipo `int` e necessita retornar algo, retornamos o total de alunos.
```c
return totalAlunos;
```

### Função para o cálculo das melhores notas

Criamos uma função do tipo `void` com o parâmetro `int quantidadeAlunos` e inicialmente definimos as variáveis (da struct anteriormente criada) `nota` como 0.
```c
melhorProva1.nota = 0.00;
melhorProva2.nota = 0.00;
melhorProva3.nota = 0.00;
```

Após, usamos o laço for para loopar a função em relação a quantidade de alunos, ficando: ``for (int i = 0; i < quantidadeAlunos; i++)``. Dentro do loop, fazemos a
verificação de qual aluno teve a melhor nota em cada prova e o-definimos pela variável ``alunoID``.

```c
if (alunos[i].prova1 > melhorProva1.nota) {
  melhorProva1.nota = alunos[i].prova1;
  melhorProva1.alunoID = i;
}

if (alunos[i].prova2 > melhorProva2.nota) {
  melhorProva2.nota = alunos[i].prova2;
  melhorProva2.alunoID = i;
}

if (alunos[i].prova3 > melhorProva3.nota) {
  melhorProva3.nota = alunos[i].prova3;
  melhorProva3.alunoID = i;
}
```

Como a função é do tipo void e não pode ter retorno, printamos o resultado nela mesma. Para fins estéticos, uso o código de cores em C para a "Melhores Notas" ficar 
azul ciano.

```
printf("\n \033[36m Melhores Notas \033[0m \n");
printf("\n- Prova 1: \n");
printf("| Aluno: %i - %s \n", alunos[melhorProva1.alunoID].matricula, alunos[melhorProva1.alunoID].nome);
printf("| Nota:  %.1f \n", melhorProva1.nota);

printf("\n- Prova 2: \n");
printf("| Aluno: %i - %s \n", alunos[melhorProva2.alunoID].matricula, alunos[melhorProva2.alunoID].nome);
printf("| Nota:  %.1f \n", melhorProva2.nota);

printf("\n- Prova 3: \n");
printf("| Aluno: %i - %s \n", alunos[melhorProva3.alunoID].matricula, alunos[melhorProva3.alunoID].nome);
printf("| Nota:  %.1f \n", melhorProva3.nota);
```

### Função o cálculo das notas médias

Criamos uma função do tipo `void` com o parâmetro `int quantidadeAlunos` e inicialmente definimos as variáveis (da struct anteriormente criada) `melhor` e 
`pior` como, respectivamente: 10 e 0.
```c
media.melhor.media = 0.00;
media.pior.media = 10.00;
```

Após, usando o mesmo princípio da função anterior, loopamos a atual usando o laço `for` em relação a quantidade de alunos, ficando: ``for (int i = 0; i < quantidadeAlunos; i++)``.
Dentro do loop, criamos um `float` calculo para calcular a média, identificando as três notas e dividindo por três.
```c
float calculo = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3;
```

Usando um `if` verificamos se o resultado do cálculo para cada aluno é o maior, e, definimos na variável `alunoID` anteriormente criada assim, identificando e
registrando os dois extremos de alunos (melhor e pior).
```c
// Maior média
if (calculo > media.melhor.media) {
  media.melhor.media = calculo;
  media.melhor.alunoID = i;
}

// Menor média
if (calculo < media.pior.media) {
  media.pior.media = calculo;
  media.pior.alunoID = i;
}
```

Como a função é do tipo void e não pode ter retorno, printamos o resultado nela mesma. Para fins estéticos, uso o código de cores em C para a "Melhores Notas" ficar 
azul ciano, "Maior média" em verde e "Menor média" em vermelho claro.

```c
printf("\n \033[36m Melhor/Pior Media \033[0m \n\n");

printf("- \033[32m Maior Media: \033[0m \n");
printf("| Aluno: %i - %s\n", alunos[media.melhor.alunoID].matricula, alunos[media.melhor.alunoID].nome);
printf("| Notas: %.1f - %.1f - %.1f (%.1f)\n", alunos[media.melhor.alunoID].prova1, alunos[media.melhor.alunoID].prova2, alunos[media.melhor.alunoID].prova3, media.melhor.media);

printf("\n- \033[31m Menor Media: \033[0m \n");
printf("| Aluno: %i - %s\n", alunos[media.pior.alunoID].matricula, alunos[media.pior.alunoID].nome);
printf("| Notas: %.1f - %.1f - %.1f (%.1f)\n", alunos[media.pior.alunoID].prova1, alunos[media.pior.alunoID].prova2, alunos[media.pior.alunoID].prova3, media.pior.media);
```

### Função para o retorno do boletim final

Criamos uma função do tipo `void` com o parâmetro `int quantidadeAlunos` e novamente usamos o laço `for` para loopar a função em relação a quantidade de alunos, ficando:
``for (int i = 0; i < quantidadeAlunos; i++)`` e já dentro do laço, colocamos o mesmo float `calculo` criado anteriormente (nesse caso, para definirmos se a nota
do aluno é ou não menor que seis usando um `if`). Assim, dentro do loop (para informar os valores de todos alunos, printamos o resultado.

```c
printf("| Aluno: %i - %s \n", alunos[i].matricula, alunos[i].nome);
printf("| Media: %.2f", calculo);

if (calculo < 6) {
  printf("\n| Resultado: \033[31m Reprovado \033[0m \n");
} else {
  printf("\n| Resultado: \033[32m Aprovado \033[0m \n");
}
```

Para fins estéticos, cores novamente foram usadas.

### Exibição das funções ao usuário

Voltando para a função `main`, inicializamos as três funções anteriormente criadas - para o programa dar "load" nelas. Junto, definimos a localização do sistema
como pt_BR e em UTF-8 através da função `setlocale` da biblioteca opcional `locale.h` para garantir o funcionamento e exibição das cores no terminal.
```c
setlocale(LC_ALL, "pt_BR.UTF-8");

int numAlunos = entradaDeDados();

printf("Informe os dados dos alunos\n");

melhoresNotas(numAlunos);
notasMedias(numAlunos);
boletim(numAlunos);
```

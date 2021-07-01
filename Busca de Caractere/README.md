# Busca de Caractére

## Proposta

A criação de um programa que o usuário digite uma frase de até 100 caractéres e escolha uma letra dela para buscar e, o programa verifica quantas vezes essa letra aparece na string.

## Resolução

- Declaramos as variáveis do tipo char ``s[100] e busca`` para armazenar, respectivamente: a string digitada pelo usuário e a letra que ele deseja buscar e a variável do tipo int ``loop = 0`` para armazenar quantas vezes o ``char busca`` repetiu (definimos o valor inicial como 0).

Inicialmente, usando o `gets` (basicamente uma função de scanf para strings) a frase digitada pelo usuário e com o ``scanf`` o caractére que o mesmo deseja procurar.
```c
printf("Escreva uma frase ou palavra (maximo de 100 caracteres)\n");
gets(s);

printf("\nDigite um caractere para buscar: ");
scanf("%c", &busca);
```

Agora, loopamos uma função usando o laço ``for`` e o definimos como: ``i = 0; i < 100; i++`` para ele ler cada caractére da string, iniciando em zero (``i = 0``) até o centésimo caractére (``i < 100``). Dentro do loop, verificamos se a string chegou ao fim pelo caractére \0 e se sim, "breako" o programa para sair do loop. Também fiz a verificação para verificar se o caractére atual que está sendo feita a leitura é a letra digitada pelo usuário, se sim, adicionamos +1 na nossa int repetidas.

```c
for (int i = 0; i < 100; i++) {
  if (s[i] == '\0')
    break;

  if (s[i] == busca)
    loop++;
  }
}
```

Após, retormos para o usuário a quantidade de vezes que a letra ``char busca`` apareceu na string ``char s[100]`` usando um printf.
```c
printf("O caractere (%c) aparece (%i) vezes na sua string", busca, loop);
```




#include <stdio.h>
#include <locale.h>

// Estrutura dos dados do Aluno
struct ficha {
    int matricula;
    char nome[50];
    float prova1, prova2, prova3;
} alunos[10];

// Estrutura das melhores Notas
struct melhoresNotas {
    int alunoID;
    float nota;
} melhorProva1, melhorProva2, melhorProva3;

// Estrutura das médias das Notas
struct mediaNotas {
    int alunoID;
    float media;
};

// Estrutura das notas médias dos Alunos
struct mediaAlunos {
    struct mediaNotas pior;
    struct mediaNotas melhor;
} media;

// Função Main
int main() {
    // Definir localização padrão para PT-BR UTF8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variáveis
    int numAlunos = entradaDeDados();

    // Entrada
    printf("Informe os dados dos alunos\n");

    // Base (funções)
    melhoresNotas(numAlunos);
    notasMedias(numAlunos);
    boletim(numAlunos);

    // Fechamento
    return 0;
    system("pause");
}

// Função Int para a entrada dos dados dos Alunos
int entradaDeDados() {
    // Variáveis
    char add;
    int totalAlunos = 0;

    // Loop "do" para a adição dos alunos
    do {
        // Limpar dados pré-escritos
        fflush(stdin);

        // Verificação para adicionar mais alunos
        if (totalAlunos != 0) {
            printf("\nAdicionar mais alunos? (S/N)");
            scanf("%c", &add);

            if (add == 'N') {
                break;
            }
        }

        // Entrada
        printf("\nDigite a matricula do aluno: ");
        scanf("%i", & alunos[totalAlunos].matricula);
        fflush(stdin);

        printf("\nDigite o nome do aluno: ");
        gets(alunos[totalAlunos].nome);

        printf("\nDigite a primeira nota do aluno: ");
        scanf("%f", & alunos[totalAlunos].prova1);
        // Loop "do - while" para verificar se a nota digitada é < 0 ou > 10.
        while (alunos[totalAlunos].prova1 < 0 || alunos[totalAlunos].prova1 > 10) {
            do {
            printf("Nota (1) invalida, tente novamente: ");
            scanf("%f", & alunos[totalAlunos].prova1);
            } while (alunos[totalAlunos].prova1 < 0 < 0 || alunos[totalAlunos].prova1 > 10);  
        }

        printf("\nDigite a segunda nota do aluno: ");
        scanf("%f", & alunos[totalAlunos].prova2);
        // Loop "do - while" para verificar se a nota digitada é < 0 ou > 10.
        while (alunos[totalAlunos].prova2 < 0 || alunos[totalAlunos].prova2 > 10) {
            do {
            printf("Nota (2) invalida, tente novamente: ");
            scanf("%f", & alunos[totalAlunos].prova2);
            } while (alunos[totalAlunos].prova2 < 0 < 0 || alunos[totalAlunos].prova2 > 10);  
        }

        printf("\nDigite a terceira nota do aluno: ");
        scanf("%f", & alunos[totalAlunos].prova3);
        // Loop "do - while" para verificar se a nota digitada é < 0 ou > 10.
        while (alunos[totalAlunos].prova3 < 0 || alunos[totalAlunos].prova3 > 10) {
            do {
            printf("Nota (3) invalida, tente novamente: ");
            scanf("%f", & alunos[totalAlunos].prova3);
            } while (alunos[totalAlunos].prova3 < 0 < 0 || alunos[totalAlunos].prova3 > 10);  
        }

        // Pular para próximo aluno, repetindo o código
        totalAlunos++;

    } while (totalAlunos < 10);

    printf("\n\033[30m ===================================== \033[0m \n");

    // Retorno
    return totalAlunos;
}

// Função Void para o cálculo das melhores notas
void melhoresNotas(int quantidadeAlunos) {
    // Variáveis
    melhorProva1.nota = 0.00;
    melhorProva2.nota = 0.00;
    melhorProva3.nota = 0.00;

    // Loop "for" para verificar qual aluno teve a melhor nota
    for (int i = 0; i < quantidadeAlunos; i++) {
        // Verificar qual aluno foi melhor na 1a prova
        if (alunos[i].prova1 > melhorProva1.nota) {
            melhorProva1.nota = alunos[i].prova1;
            melhorProva1.alunoID = i;
        }

        // Verificar qual aluno foi melhor na 2a prova
        if (alunos[i].prova2 > melhorProva2.nota) {
            melhorProva2.nota = alunos[i].prova2;
            melhorProva2.alunoID = i;
        }

        // Verificar qual aluno foi melhor na 3a prova
        if (alunos[i].prova3 > melhorProva3.nota) {
            melhorProva3.nota = alunos[i].prova3;
            melhorProva3.alunoID = i;
        }
    }

    // Retorno
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

    printf("\n\033[30m ===================================== \033[0m \n");

}

// Função para cálculo das médias dos alunos
void notasMedias(int quantidadeAlunos) {
    // Variáveis
    media.melhor.media = 0.00;
    media.pior.media = 10.00;

    // Loop For para verificação de qual aluno teve a menor/maior nota média
    for (int i = 0; i < quantidadeAlunos; i++) {
        // Cálculo da média de cada aluno
        float calculo = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3;

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
    }

    // Retorno
    printf("\n \033[36m Melhor/Pior Media \033[0m \n\n");

    printf("- \033[32m Maior Media: \033[0m \n");
    printf("| Aluno: %i - %s\n", alunos[media.melhor.alunoID].matricula, alunos[media.melhor.alunoID].nome);
    printf("| Notas: %.1f - %.1f - %.1f (%.1f)\n", alunos[media.melhor.alunoID].prova1, alunos[media.melhor.alunoID].prova2, alunos[media.melhor.alunoID].prova3, media.melhor.media);

    printf("\n- \033[31m Menor Media: \033[0m \n");
    printf("| Aluno: %i - %s\n", alunos[media.pior.alunoID].matricula, alunos[media.pior.alunoID].nome);
    printf("| Notas: %.1f - %.1f - %.1f (%.1f)\n", alunos[media.pior.alunoID].prova1, alunos[media.pior.alunoID].prova2, alunos[media.pior.alunoID].prova3, media.pior.media);

    printf("\n\033[30m ===================================== \033[0m \n");
}

// Função para dar o resultado geral de todos alunos
void boletim(int quantidadeAlunos) {

    // Entrada
    printf("\n \033[36m Boletim Geral \033[0m \n\n");

    // Loop For para pegar todos os alunos
    for (int i = 0; i < quantidadeAlunos; i++) {

        // Cálculo da média de cada aluno
        float calculo = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3)/3;

        // Retorno
        printf("| Aluno: %i - %s \n", alunos[i].matricula, alunos[i].nome);
        printf("| Media: %.2f", calculo);

        if (calculo < 6) {
            printf("\n| Resultado: \033[31m Reprovado \033[0m \n");
        } else {
            printf("\n| Resultado: \033[32m Aprovado \033[0m \n");
        }

        printf("\n\033[30m ===================================== \033[0m \n");
    }
}

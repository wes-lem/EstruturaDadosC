#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float media, provas[3];
} Aluno;

int main() {
    Aluno alunos[5], top1;
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Insira o nome do Aluno %d\n", i + 1);
        scanf("%49s", alunos[i].nome);

        printf("Matrícula do %s\n", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        for (j = 0; j < 3; j++) {
            printf("Insira a nota %dº do %s\n", j + 1, alunos[i].nome);
            scanf("%f", &alunos[i].provas[j]);
        }
    }

    for (i = 0; i < 3; i++) {
        alunos[i].media = 0;
        for (j = 0; j < 3; j++) {
            alunos[i].media += alunos[i].provas[j];
        }

        alunos[i].media = alunos[i].media / 3;
    }

    top1 = alunos[0];

    for (i = 1; i < 3; i++) {
        if (alunos[i].media > top1.media) {
            top1 = alunos[i];
        }
    }

    printf("%s tem a maior média: %.1f\n", top1.nome, top1.media);

    for (i = 0; i < 3; i++) {
        printf("%dº prova: %.1f\n", i + 1, top1.provas[i]);
    }
}

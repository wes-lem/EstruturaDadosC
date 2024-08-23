#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[5];
    Atleta maisAlto, maisVelho;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].nome);

        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].esporte);

        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);

        printf("Digite a altura do atleta %d (em metros): ", i + 1);
        scanf("%f", &atletas[i].altura);

        while (getchar() != '\n');
    }

    maisAlto = atletas[0];
    maisVelho = atletas[0];

    for (i = 1; i < 5; i++) {
        if (atletas[i].altura > maisAlto.altura) {
            maisAlto = atletas[i];
        }
        
        if (atletas[i].idade > maisVelho.idade) {
            maisVelho = atletas[i];
        }
    }

    char nomeMaisAlto[50];
    char nomeMaisVelho[50];

    strcpy(nomeMaisAlto, maisAlto.nome);
    strcpy(nomeMaisVelho, maisVelho.nome);

    printf("O atleta mais alto é: %s com %.2f metros\n", nomeMaisAlto, maisAlto.altura);
    printf("O atleta mais velho é: %s com %d anos\n", nomeMaisVelho, maisVelho.idade);
}

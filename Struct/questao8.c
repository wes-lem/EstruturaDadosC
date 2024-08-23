#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int dia;
    int mes;
    int ano;
} Pessoa;

int main() {
    Pessoa pessoas[6];
    Pessoa maisNova, maisVelha;
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        size_t len = strlen(pessoas[i].nome);
        if (len > 0 && pessoas[i].nome[len - 1] == '\n') {
            pessoas[i].nome[len - 1] = '\0';
        }

        printf("Digite a data de nascimento da pessoa %d (dd mm aaaa): ", i + 1);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
        while (getchar() != '\n');
    }

    maisNova = pessoas[0];
    maisVelha = pessoas[0];

    for (i = 1; i < 6; i++) {
        if (pessoas[i].ano > maisNova.ano ||
            (pessoas[i].ano == maisNova.ano && pessoas[i].mes > maisNova.mes) ||
            (pessoas[i].ano == maisNova.ano && pessoas[i].mes == maisNova.mes && pessoas[i].dia > maisNova.dia)) {
            maisNova = pessoas[i];
        }
        
        if (pessoas[i].ano < maisVelha.ano ||
            (pessoas[i].ano == maisVelha.ano && pessoas[i].mes < maisVelha.mes) ||
            (pessoas[i].ano == maisVelha.ano && pessoas[i].mes == maisVelha.mes && pessoas[i].dia < maisVelha.dia)) {
            maisVelha = pessoas[i];
        }
    }

    printf("A pessoa mais nova é: %s\n", maisNova.nome);
    printf("A pessoa mais velha é: %s\n", maisVelha.nome);
}

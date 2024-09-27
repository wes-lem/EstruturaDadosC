#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[50];
    float valor;
} Registro;

void adicionarRegistro(char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "ab");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Registro novoRegistro;

    printf("Digite o ID: ");
    scanf("%d", &novoRegistro.id);
    printf("Digite o Nome: ");
    scanf(" %[^\n]", novoRegistro.nome);
    printf("Digite o Valor: ");
    scanf("%f", &novoRegistro.valor);

    fwrite(&novoRegistro, sizeof(Registro), 1, arquivo);
    printf("Registro adicionado com sucesso!\n");

    fclose(arquivo);
}

void lerRegistros(char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Registro reg;

    printf("\nLista de Registros:\n");
    while (fread(&reg, sizeof(Registro), 1, arquivo)) {
        printf("ID: %d\n", reg.id);
        printf("Nome: %s\n", reg.nome);
        printf("Valor: %.2f\n\n", reg.valor);
    }

    fclose(arquivo);
}

int main() {
    char nomeArquivo[] = "registros.dat";
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Adicionar Registro\n");
        printf("2. Visualizar Registros\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarRegistro(nomeArquivo);
                break;
            case 2:
                lerRegistros(nomeArquivo);
                break;
            case 3:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 3);

    return 0;
}
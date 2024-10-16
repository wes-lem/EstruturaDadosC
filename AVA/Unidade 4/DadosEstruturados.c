#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 10

// Estruturas Estáticas
typedef struct {
    int dados[MAX];
    int tamanho;
} ListaEstatica;

typedef struct {
    int dados[MAX];
    int topo;
} PilhaEstatica;

typedef struct {
    int dados[MAX];
    int inicio, fim;
} FilaEstatica;

// Estruturas Dinâmicas
typedef struct No {
    int dado;
    struct No* prox;
} No;

typedef struct {
    No* cabeca;
} ListaDinamica;

typedef struct {
    No* topo;
} PilhaDinamica;

typedef struct {
    No* inicio;
    No* fim;
} FilaDinamica;

// Funções de Lista Estática
void inicializarListaEstatica(ListaEstatica* lista) {
    lista->tamanho = 0;
}

void adicionarListaEstatica(ListaEstatica* lista, int valor) {
    if (lista->tamanho < MAX) {
        lista->dados[lista->tamanho++] = valor;
    } else {
        printf("Lista está cheia!\n");
    }
}

void removerListaEstatica(ListaEstatica* lista, int valor) {
    int encontrado = 0;
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->dados[i] == valor) {
            encontrado = 1;
            for (int j = i; j < lista->tamanho - 1; j++) {
                lista->dados[j] = lista->dados[j + 1];
            }
            lista->tamanho--;
            break;
        }
    }
    if (!encontrado) {
        printf("Elemento não encontrado na lista!\n");
    }
}

void buscarListaEstatica(ListaEstatica* lista, int valor) {
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->dados[i] == valor) {
            printf("Elemento %d encontrado na posição %d.\n", valor, i);
            return;
        }
    }
    printf("Elemento não encontrado na lista.\n");
}

void imprimirListaEstatica(ListaEstatica* lista) {
    printf("Elementos da lista estática: ");
    for (int i = 0; i < lista->tamanho; i++) {
        printf("%d ", lista->dados[i]);
    }
    printf("\n");
}

// Funções de Pilha Estática
void inicializarPilhaEstatica(PilhaEstatica* pilha) {
    pilha->topo = -1;
}

void empilharEstatica(PilhaEstatica* pilha, int valor) {
    if (pilha->topo < MAX - 1) {
        pilha->dados[++(pilha->topo)] = valor;
    } else {
        printf("Pilha cheia!\n");
    }
}

void desempilharEstatica(PilhaEstatica* pilha) {
    if (pilha->topo >= 0) {
        pilha->topo--;
    } else {
        printf("Pilha vazia!\n");
    }
}

void imprimirPilhaEstatica(PilhaEstatica* pilha) {
    if (pilha->topo >= 0) {
        printf("Elementos da pilha: ");
        for (int i = 0; i <= pilha->topo; i++) {
            printf("%d ", pilha->dados[i]);
        }
        printf("\n");
    } else {
        printf("Pilha vazia!\n");
    }
}

// Funções de Fila Estática
void inicializarFilaEstatica(FilaEstatica* fila) {
    fila->inicio = 0;
    fila->fim = 0;
}

void enfileirarEstatica(FilaEstatica* fila, int valor) {
    if ((fila->fim + 1) % MAX != fila->inicio) {
        fila->dados[fila->fim] = valor;
        fila->fim = (fila->fim + 1) % MAX;
    } else {
        printf("Fila cheia!\n");
    }
}

void desenfileirarEstatica(FilaEstatica* fila) {
    if (fila->inicio != fila->fim) {
        fila->inicio = (fila->inicio + 1) % MAX;
    } else {
        printf("Fila vazia!\n");
    }
}

void imprimirFilaEstatica(FilaEstatica* fila) {
    if (fila->inicio != fila->fim) {
        printf("Elementos da fila: ");
        for (int i = fila->inicio; i != fila->fim; i = (i + 1) % MAX) {
            printf("%d ", fila->dados[i]);
        }
        printf("\n");
    } else {
        printf("Fila vazia!\n");
    }
}

// Funções de Lista Dinâmica
void inicializarListaDinamica(ListaDinamica* lista) {
    lista->cabeca = NULL;
}

void adicionarListaDinamica(ListaDinamica* lista, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = lista->cabeca;
    lista->cabeca = novo;
}

void removerListaDinamica(ListaDinamica* lista, int valor) {
    No* atual = lista->cabeca;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->dado == valor) {
            if (anterior == NULL) {
                lista->cabeca = atual->prox; // Remove o primeiro elemento
            } else {
                anterior->prox = atual->prox; // Remove o elemento do meio/final
            }
            free(atual);
            printf("Elemento %d removido.\n", valor);
            return;
        }
        anterior = atual;
        atual = atual->prox;
    }
    printf("Elemento não encontrado na lista.\n");
}

void buscarListaDinamica(ListaDinamica* lista, int valor) {
    No* atual = lista->cabeca;
    int pos = 0;
    
    while (atual != NULL) {
        if (atual->dado == valor) {
            printf("Elemento %d encontrado na posição %d.\n", valor, pos);
            return;
        }
        atual = atual->prox;
        pos++;
    }
    printf("Elemento não encontrado na lista.\n");
}

void imprimirListaDinamica(ListaDinamica* lista) {
    No* atual = lista->cabeca;
    printf("Elementos da lista dinâmica: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

// Funções de Pilha Dinâmica
void inicializarPilhaDinamica(PilhaDinamica* pilha) {
    pilha->topo = NULL;
}

void empilharDinamica(PilhaDinamica* pilha, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = pilha->topo;
    pilha->topo = novo;
}

void desempilharDinamica(PilhaDinamica* pilha) {
    if (pilha->topo != NULL) {
        No* temp = pilha->topo;
        pilha->topo = pilha->topo->prox;
        free(temp);
    } else {
        printf("Pilha vazia!\n");
    }
}

void imprimirPilhaDinamica(PilhaDinamica* pilha) {
    No* atual = pilha->topo;
    printf("Elementos da pilha: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

// Funções de Fila Dinâmica
void inicializarFilaDinamica(FilaDinamica* fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

void enfileirarDinamica(FilaDinamica* fila, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;
    if (fila->fim != NULL) {
        fila->fim->prox = novo;
    }
    fila->fim = novo;
    if (fila->inicio == NULL) {
        fila->inicio = novo;
    }
}

void desenfileirarDinamica(FilaDinamica* fila) {
    if (fila->inicio != NULL) {
        No* temp = fila->inicio;
        fila->inicio = fila->inicio->prox;
        free(temp);
        if (fila->inicio == NULL) {
            fila->fim = NULL;
        }
    } else {
        printf("Fila vazia!\n");
    }
}

void imprimirFilaDinamica(FilaDinamica* fila) {
    No* atual = fila->inicio;
    printf("Elementos da fila: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

// Função Principal
int main() {
    char opcao;
    int tipo;
    int valor;

    // Inicialização das Estruturas
    ListaEstatica listaEstatica;
    PilhaEstatica pilhaEstatica;
    FilaEstatica filaEstatica;
    ListaDinamica listaDinamica;
    PilhaDinamica pilhaDinamica;
    FilaDinamica filaDinamica;

    inicializarListaEstatica(&listaEstatica);
    inicializarPilhaEstatica(&pilhaEstatica);
    inicializarFilaEstatica(&filaEstatica);
    inicializarListaDinamica(&listaDinamica);
    inicializarPilhaDinamica(&pilhaDinamica);
    inicializarFilaDinamica(&filaDinamica);

    do {
        printf("\nEscolha a estrutura de dados:\n");
        printf("1 - Lista\n2 - Pilha\n3 - Fila\nx - Sair\n");
        scanf(" %c", &opcao);
        
        if (tolower(opcao) == 'x') {
            break;
        }

        printf("Escolha o tipo:\n1 - Estática\n2 - Dinâmica\n");
        scanf("%d", &tipo);

        if (opcao == '1') {  // Lista
            do {
                printf("\nOpções de Lista:\n");
                printf("a - Adicionar\nb - Remover\nc - Buscar\nd - Imprimir\ne - Voltar\n");
                scanf(" %c", &opcao);

                if (opcao == 'a') {
                    printf("Digite um valor para adicionar à lista: ");
                    scanf("%d", &valor);
                    if (tipo == 1) {
                        adicionarListaEstatica(&listaEstatica, valor);
                    } else {
                        adicionarListaDinamica(&listaDinamica, valor);
                    }
                } else if (opcao == 'b') {
                    printf("Digite um valor para remover da lista: ");
                    scanf("%d", &valor);
                    if (tipo == 1) {
                        removerListaEstatica(&listaEstatica, valor);
                    } else {
                        removerListaDinamica(&listaDinamica, valor);
                    }
                } else if (opcao == 'c') {
                    printf("Digite um valor para buscar na lista: ");
                    scanf("%d", &valor);
                    if (tipo == 1) {
                        buscarListaEstatica(&listaEstatica, valor);
                    } else {
                        buscarListaDinamica(&listaDinamica, valor);
                    }
                } else if (opcao == 'd') {
                    if (tipo == 1) {
                        imprimirListaEstatica(&listaEstatica);
                    } else {
                        imprimirListaDinamica(&listaDinamica);
                    }
                }

            } while (opcao != 'e');

        } else if (opcao == '2') {  // Pilha
            do {
                printf("\nOpções de Pilha:\n");
                printf("a - Empilhar\nb - Desempilhar\nc - Imprimir\nd - Voltar\n");
                scanf(" %c", &opcao);

                if (opcao == 'a') {
                    printf("Digite um valor para empilhar: ");
                    scanf("%d", &valor);
                    if (tipo == 1) {
                        empilharEstatica(&pilhaEstatica, valor);
                    } else {
                        empilharDinamica(&pilhaDinamica, valor);
                    }
                } else if (opcao == 'b') {
                    if (tipo == 1) {
                        desempilharEstatica(&pilhaEstatica);
                    } else {
                        desempilharDinamica(&pilhaDinamica);
                    }
                } else if (opcao == 'c') {
                    if (tipo == 1) {
                        imprimirPilhaEstatica(&pilhaEstatica);
                    } else {
                        imprimirPilhaDinamica(&pilhaDinamica);
                    }
                }

            } while (opcao != 'd');

        } else if (opcao == '3') {  // Fila
            do {
                printf("\nOpções de Fila:\n");
                printf("a - Enfileirar\nb - Desenfileirar\nc - Imprimir\nd - Voltar\n");
                scanf(" %c", &opcao);

                if (opcao == 'a') {
                    printf("Digite um valor para enfileirar: ");
                    scanf("%d", &valor);
                    if (tipo == 1) {
                        enfileirarEstatica(&filaEstatica, valor);
                    } else {
                        enfileirarDinamica(&filaDinamica, valor);
                    }
                } else if (opcao == 'b') {
                    if (tipo == 1) {
                        desenfileirarEstatica(&filaEstatica);
                    } else {
                        desenfileirarDinamica(&filaDinamica);
                    }
                } else if (opcao == 'c') {
                    if (tipo == 1) {
                        imprimirFilaEstatica(&filaEstatica);
                    } else {
                        imprimirFilaDinamica(&filaDinamica);
                    }
                }

            } while (opcao != 'd');
        }

    } while (tolower(opcao) != 'x');

    printf("Programa encerrado.\n");
    return 0;
}
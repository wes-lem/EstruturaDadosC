#include <stdio.h>
#include <stdlib.h>

#define MAX 10 

typedef struct {
    int itens[MAX];
    int frente; 
    int tras;       
} Fila;


void inicializarFila(Fila *f) {
    f->frente = 0;
    f->tras = -1;
}


int filaVazia(Fila *f) {
    return f->frente > f->tras;
}


int filaCheia(Fila *f) {
    return f->tras == MAX - 1;
}


void enfileirar(Fila *f, int item) {
    if (filaCheia(f)) {
        printf("Fila cheia!\n");
        return;
    }
    f->itens[++(f->tras)] = item;
}


int desenfileirar(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return -1; 
    }
    return f->itens[(f->frente)++];
}


int frenteFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return -1; 
    }
    return f->itens[f->frente];
}


int main() {
    Fila f;
    inicializarFila(&f);

    
    enfileirar(&f, 05);
    enfileirar(&f, 06);
    enfileirar(&f, 07);

    
    printf("Frente: %d\n", frenteFila(&f));

    
    printf("Desenfileirado: %d\n", desenfileirar(&f));
    printf("Desenfileirado: %d\n", desenfileirar(&f));
    printf("Desenfileirado: %d\n", desenfileirar(&f));
    printf("Desenfileirado: %d\n", desenfileirar(&f)); 

    return 0;
}

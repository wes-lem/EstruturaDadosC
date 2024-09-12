#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int p[MAX_SIZE]; 
int t = -1;      


void push(int y) {
    
    if (t == MAX_SIZE - 1) {
        printf("Pilha cheia!\n");
        return;
    }
    p[++t] = y;
}


void pop() {
    
    if (t == -1) {
        printf("Pilha vazia!\n");
        return;
    }
    t--;
}


int top() {
    if (t == -1) {
        printf("Pilha vazia!\n");
        return -1; // Valor de erro
    }
    return p[t];
}

int main() {
    
    push(10);
    push(20);
    push(30);

    printf("Topo da pilha: %d\n", top()); 

    pop();
    printf("Topo após pop: %d\n", top()); 

    return 0;
}

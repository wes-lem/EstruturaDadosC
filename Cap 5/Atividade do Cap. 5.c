#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int f[MAX_SIZE]; 
int s = 0;      
int t = -1;      


void enqueue(int y) {
    
    if (t == MAX_SIZE - 1) {
        printf("Fila cheia!\n");
        return;
    }
    f[++t] = y;
}

void dequeue() {
    // Verifica se a fila está vazia
    if (s > t) {
        printf("Fila vazia!\n");
        return;
    }
    s++;
}

int main() {
    
    enqueue(1);
    enqueue(2);
    enqueue(3);
    
    printf("Elemento removido: %d\n", f[s]); 
    dequeue();
    
    printf("Elemento removido: %d\n", f[s]); 
    dequeue();
    
    return 0;
}

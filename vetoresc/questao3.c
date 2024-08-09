#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10];
    int i = 0, count = 0, soma = 0;

    for(i = 0; i<10; i++){
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0){
            count++;
        }
        else if(vetor[i] > 0){
            soma += vetor[i];
        }
        printf("Result: %d", count);
        printf("Result: %d", soma);
    }
}
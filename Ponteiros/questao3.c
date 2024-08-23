#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    float *ponteiro = &vetor;

    for(int i = 0; i < 10;i++){
        printf("Endereço de vetor[%d]: %p\n", i, (void*)(ponteiro + i));
    }
}
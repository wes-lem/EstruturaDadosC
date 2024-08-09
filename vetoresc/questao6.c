#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10] = {2,0,5,-2,-5,7,8,5,3,7}, pares = 0; 
    

    for(int i = 0; i < 10; i++){
        if(vetor[i] %2 == 0){
            pares++;
        }
        
    }

    printf("qtd de pares: %d\n", pares);

    return 0;
}
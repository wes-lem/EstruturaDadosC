#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [3][3];
    int ponteiro = &matriz;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Endereço de matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    }
}
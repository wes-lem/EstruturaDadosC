#include <stdio.h>
#include <stdlib.h>

int main(){
    float X[10] = {1.3,-4,2.1,-5.5,6.2,-7,-2,6.5,-3,4}, positivos = 0; int negativos = 0;
    

    for(int i = 0; i < 10; i++){
        if(X[i] >= 0){
            positivos += X[i];
        }
        if(X[i] < 0){
            negativos++;
        }
    }

    printf("Soma positivos: %.1f\nQuantidade Negativos: %d\n\n\n\n\n\n\n\n",positivos,negativos);

    return 0;
}
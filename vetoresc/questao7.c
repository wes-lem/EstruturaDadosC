#include <stdio.h>
#include <stdlib.h>

int main(){
    int X[10], maior = 0, menor = 0; 
    

    for(int i = 0; i < 10; i++){
        scanf("%d",&X[i]);
    }

    maior = X[0], menor = X[0];

    for(int i = 0; i < 10; i++){
        if(X[i] < menor){
            menor = X[i];
        }else if(X[i] > maior){
            maior = X[i];
        }
    }

    printf("Menor: %d\nMaior: %d\n\n\n\n\n\n\n\n",menor,maior);

    return 0;
}
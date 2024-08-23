#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a = NULL, *b = NULL;

    if(&a > &b){
        printf("A Maior: %d", &a);
    }else{
        printf("B Maior: %d", &b);
    }
}
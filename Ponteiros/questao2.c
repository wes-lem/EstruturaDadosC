#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    int *pont_a = &a, *pont_b = &b;


    scanf("%d",&a);

    scanf("%d", &b);

    if(&a > &b){
        printf("A Maior: %d", *pont_a);
    }else{
        printf("B Maior: %d", *pont_b);
    }
}
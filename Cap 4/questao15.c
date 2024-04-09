#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int main() {
     float a, b, c;
     float delta = b * b - 4 * a * c;
     float raiz1, raiz2;

    printf("Digite os coeficientes da equação do segundo grau (ax^2 + bx + c):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

 
    if (a == 0) {
        printf("Não é equação de segundo grau\n");
    }

    if (delta < 0) {
        printf("Não existe raiz real\n");
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("Raiz única: %.2f\n", raiz1);
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes: %.2f e %.2f\n", raiz1, raiz2);
    }
     return 0;
}



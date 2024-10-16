#include <stdio.h>
#include <stdlib.h>

int calcularMDC(int X, int Y) {
    if (Y == 0) {
        return X;
    }
    return calcularMDC(Y, X % Y);
}

int main() {
    int X, Y, divisor;
    printf("Primeiro valor: ");
    scanf("%d", &X);
    printf("Segundo valor: ");
    scanf("%d", &Y);
    
    divisor = calcularMDC(X, Y);
    printf("O MDC de %d e %d: %d\n", X, Y, divisor);
    
    return 0;
}

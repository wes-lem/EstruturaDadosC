#include <stdio.h>
#include <stdlib.h>

int fibonacci(int N) {
    if (N == 0) {
        return 0;
    } else if (N == 1) {
        return 1;
    }
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main() {
    int N;
    printf("Valor de N: ");
    scanf("%d", &N);
    
    printf("O %d valor de Fibonacci: %d\n", N, fibonacci(N));
    
    return 0;
}

#include <stdio.h>

int somaCubos(int n) {
    if (n == 1) {
        return 1;
    }
    return n * n * n + somaCubos(n - 1);
}

int main() {
    int n;
    
    printf("Valor de n: ");
    scanf("%d", &n);
    
    int result = somaCubos(n);
    printf("A soma %d é: %d\n", n, result);
    
    return 0;
}
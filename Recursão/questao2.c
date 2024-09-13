#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    }
    return n + soma(n - 1);
}

int main() {
    int n;

    printf("Valor de N: ");
    scanf("%d", &n);
    
    int result = soma(n);
    printf("A soma de 1 até %d é: %d\n", n, result);
    
    return 0;
}

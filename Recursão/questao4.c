#include <stdio.h>

void decrescente(int n) {
    if (n < 0) {
        return;
    }
    printf("%d\n", n);
    decrescente(n - 1);
}

int main() {
    int n;
    
    printf("Valor de N: ");
    scanf("%d", &n);
    
    decrescente(n);
    
    return 0;
}

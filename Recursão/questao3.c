#include <stdio.h>

void natural(int n) {
    if (n < 0) {
        return; 
    }
    natural(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;
    
    printf("Valor de N: ");
    scanf("%d", &n);
    
    natural(n);
    
    return 0;
}

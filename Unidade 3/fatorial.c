#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int valor) {
    if (valor == 0 || valor == 1) {
        return 1;
    }
    return valor * calcularFatorial(valor - 1);
}

int main() {
    int valor, fatorial;
    printf("Digite valor: ");
    scanf("%d", &valor);
    
    fatorial = calcularFatorial(valor);
    printf("Fatorial de %d: %d\n", valor, fatorial);
    
    return 0;
}

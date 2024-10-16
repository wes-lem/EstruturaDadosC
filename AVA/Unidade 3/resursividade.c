#include <stdio.h>
#include <stdlib.h>

int calcularFatorial(int valor) {
    if (valor == 0 || valor == 1) {
        return 1;
    }
    return valor * calcularFatorial(valor - 1);
}

int fibonacci(int N) {
    if (N == 0) {
        return 0;
    } else if (N == 1) {
        return 1;
    }
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int calcularMDC(int X, int Y) {
    if (Y == 0) {
        return X;
    }
    return calcularMDC(Y, X % Y);
}

int main() {
    char opcao;
    int valor, N, X, Y, resultado;
    
    do {
        printf("Opcoes:\n");
        printf("1 - Fatorial de um numero\n");
        printf("2 - Sequencia de Fibonacci\n");
        printf("3 - Divisor\n");
        printf("x - Sair\n");
        printf("Digite sua escolha: ");
        
        scanf(" %c", &opcao);
        
        switch(opcao) {
            case '1':
                printf("Digite o numero: ");
                scanf("%d", &valor);
                resultado = calcularFatorial(valor);
                printf("Fatorial de %d: %d\n", valor, resultado);
                break;
            case '2':
                printf("Valor de N: ");
                scanf("%d", &N);
                resultado = fibonacci(N);
                printf("O %d termo de Fibonacci: %d\n", N, resultado);
                break;
            case '3':
                printf("Valor de X: ");
                scanf("%d", &X);
                printf("Valor de Y: ");
                scanf("%d", &Y);
                resultado = calcularMDC(X, Y);
                printf("O MDC de %d e %d: %d\n", X, Y, resultado);
                break;
            case 'x':
                printf("Programa encerrado...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
        
    } while (opcao != 'x');
    
    return 0;
}

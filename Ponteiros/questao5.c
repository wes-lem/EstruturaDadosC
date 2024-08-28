#include <stdio.h>

int main() {
    int vetor[5];
    int *ponteiro = vetor;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", ponteiro + i);
    }

    printf("\nDobro dos valores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Dobro de %d: %d\n", *(ponteiro+ i), 2 * (*(ponteiro + i)));
    }

    return 0;
}

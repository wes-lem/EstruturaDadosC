#include <stdio.h>

int somaVetor(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }
    return vetor[0] + somaVetor(vetor + 1, tamanho - 1);
}

double mediaVetor(int vetor[], int tamanho) {
    int soma = somaVetor(vetor, tamanho);
    return (double)soma / tamanho;
}

int main() {
    int tamanho;
    
    printf("Tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vetor[tamanho];
    
    printf("Valor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    double media = mediaVetor(vetor, tamanho);
    printf("Média: %.2f\n", media);
    
    return 0;
}

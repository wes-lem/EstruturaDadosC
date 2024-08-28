#include <stdio.h>
#include <stdlib.h>
#include <string.h>  


typedef struct {
    char nome[100];
    int idade;
    char endereco[200];
} Cadastro;


Cadastro* criarCadastro(int N) {

    Cadastro *vetor = (Cadastro*)malloc(N * sizeof(Cadastro));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); 
    }
    
   
    for (int i = 0; i < N; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        

        size_t len = strlen(vetor[i].nome);
        if (len > 0 && vetor[i].nome[len - 1] == '\n') {
            vetor[i].nome[len - 1] = '\0';
        }
        
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &vetor[i].idade);
        getchar(); 

        printf("Digite o endereco da pessoa %d: ", i + 1);
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
      
        len = strlen(vetor[i].endereco);
        if (len > 0 && vetor[i].endereco[len - 1] == '\n') {
            vetor[i].endereco[len - 1] = '\0';
        }
    }
    
    return vetor;
}

int main() {
    int n;
    
    
    printf("Digite o número de cadastros: ");
    scanf("%d", &n);
    getchar(); 
    
    if (n <= 0) {
        printf("O número de cadastros deve ser positivo.\n");
        return 1; 
    }

  
    Cadastro *vetor = criarCadastro(n);
    
    
    for (int i = 0; i < n; i++) {
        printf("\nCadastro %d:\n", i + 1);
        printf("Nome: %s\n", vetor[i].nome);
        printf("Idade: %d\n", vetor[i].idade);
        printf("Endereço: %s\n", vetor[i].endereco);
    }
    
    free(vetor);
    
    return 0; 
}

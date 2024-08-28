#include <stdio.h>

struct aluno {
    int matricula;   
    char nome[50];     
    float nota1;       
    float nota2;       
    float nota3;        
};

int main() {

    printf("O tamanho da estrutura Aluno em bytes: %zu\n", sizeof(struct aluno));
    
    return 0;
}

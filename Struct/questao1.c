#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}Pessoa;

int main(){
    Pessoa pessoa1;

    puts("Digite o nome:");
    scanf("%s", &pessoa1.nome);

    puts("Digite sua idade");
    scanf("%d",&pessoa1.idade);

    puts("Digite seu endereco");
    scanf("%s",&pessoa1.endereco);

    printf("%s\n", pessoa1.nome);
    printf("%d\n", pessoa1.idade);
    printf("%s", pessoa1.endereco);
}
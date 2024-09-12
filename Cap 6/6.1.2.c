#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void inverterPalavra(char *palavra) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;
    while (inicio < fim) {
        // Troca os caracteres
        char temp = palavra[inicio];
        palavra[inicio] = palavra[fim];
        palavra[fim] = temp;
        inicio++;
        fim--;
    }
}


void inverterSentenca(char *sentenca) {
    char *palavraInicio = sentenca;
    char palavra[1000]; 
    int comprimentoPalavra;

    
    while (*sentenca) {
        
        if (*sentenca == ' ' || *sentenca == '\0') {
            
            comprimentoPalavra = sentenca - palavraInicio;
            strncpy(palavra, palavraInicio, comprimentoPalavra);
            palavra[comprimentoPalavra] = '\0';
            inverterPalavra(palavra);
            printf("%s ", palavra);

            
            palavraInicio = sentenca + 1;
        }
        sentenca++;
    }

    
    comprimentoPalavra = sentenca - palavraInicio;
    strncpy(palavra, palavraInicio, comprimentoPalavra);
    palavra[comprimentoPalavra] = '\0';
    inverterPalavra(palavra);
    printf("%s", palavra); 
}

int main() {
    char sentenca[] = "AMU MEGASNEM ATERCES"; 
    inverterSentenca(sentenca); 
    return 0;
}

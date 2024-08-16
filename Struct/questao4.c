//Questoes 1,4,6

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}Ponto;

typedef struct{
    Ponto pSE;
    Ponto pID;
}Retangulo;

int main(){
    Retangulo retangulo;
    int largura, altura, area, perimetro;
    double comprimento;

    retangulo.pSE.x = 0;
    retangulo.pSE.y = 0;

    retangulo.pID.x = 20;
    retangulo.pID.y = 30;

    largura = retangulo.pID.x - retangulo.pSE.x;
    altura = retangulo.pID.y - retangulo.pSE.y;

    area = altura * largura;
    comprimento = sqrt(largura * largura + altura * altura);
    perimetro = (largura * 2) + (altura * 2);

    printf("Área: %d\nComprimento: %lf\nPerímetro: %d\n",area,comprimento,perimetro);
}
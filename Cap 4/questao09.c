#include <stdio.h>
int main(){
  double altura = 0;
  double peso = 0;
  printf("Digite sua altura");
  scanf("%lf", &altura);
  printf("Digite seu peso");
  scanf("%lf", &peso);

  if(altura < 1.20 && peso <= 60){
    printf("Classificação A\n");


  }

  else if(altura < 1.20 && peso > 60 && peso <= 90){
    printf("Classificação D\n");

  }
 else if(altura < 1.20 && peso > 90){
    printf("Classificação G\n");

  }
  else if(altura >= 1.20 && altura <= 1.7 && peso <= 60){
    printf("Classificação B\n");

  }
   else if(altura >= 1.20 && altura <= 1.7 && peso > 60 && peso <= 90){
    printf("Classificação E\n");

  }
  else if(altura >= 1.20 && altura <= 1.7 && peso > 90 ){
    printf("Classificação H\n");

  }
  else if(altura > 1.7 && peso <= 60 ){
    printf("Classificação C\n");


  }

   else if(altura > 1.7 && peso > 60 && peso <= 90 ){
    printf("Classificação F\n");

  }
    else if(altura > 1.7 && peso > 90){
    printf("Classificação I\n");

  }else{
    printf("Nenhuma opcao");
  }


return 0;

}
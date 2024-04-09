#include <stdio.h>
int main(){
  double media;
  double x, y, z;
  printf("Digite o valor de X");
  scanf("%lf", &x);

  printf("Digite o valor de y");
  scanf("%lf", &y);

   printf("Digite o valor de z");
  scanf("%lf", &z);

  printf("1 - para Media geometrica\n2 - para media ponderada\n3 - para media harmonica\n4 - para media aritmetica");
  scanf("%lf", &media);
  if(media == 1){
    double med = x*y*z;
    printf("Media %.1lf", med);

  }else if( media == 2){
    double med = (x + 2 * y + 3 * z)/6;
      printf("Media %.1lf", med);

  }
  else if( media == 3){
    double med = 1 /( (1/x) + (1/y) + (1/z)) ;
      printf("Media %.1lf", med);

  }

  else if( media == 4){
    double med = (x + y + z) / 3;
      printf("Media %.1lf", med);

  }else   {
    printf("Erro");
  }              
  return 0;

}
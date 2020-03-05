#include <stdio.h>
 
int main (){
 
  float pcar, x, y, perc1, perc2;
  scanf("%f %f %f", &pcar, &x, &y);
 
  perc1=pcar*(x/100);
  perc2=pcar*(y/100);
  printf("O VALOR DO CARRO E = %.2f\n", pcar+perc1+perc2);
 
 return 0;
}
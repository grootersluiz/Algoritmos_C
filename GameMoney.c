#include <stdio.h>
 
int main(){
 
  int njogos, i=1;
  double publico, renda, percpop, percger, percarq, perccad;
  scanf("%d\n", &njogos);
 
  while(i<=njogos)
  {
  scanf("%lf %lf %lf %lf %lf", &publico, &percpop, &percger, &percarq, &perccad);
  
  percpop=publico*(percpop/100);
  percger=publico*(percger/100);
  percarq=publico*(percarq/100);
  perccad=publico*(perccad/100);
  renda=(percpop*1)+(percger*5)+(percarq*10)+(perccad*20);
  printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda);
  i++;
  } 
  return 0;
  }
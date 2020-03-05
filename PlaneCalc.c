#include <stdio.h>
#include <math.h>
 
int main(){ 
  
  double m, a, t, v, s, w;
  scanf("%lf%lf%lf", &m, &a, &t);
 
  v=(a*t);
  s=(a*pow(t,2))/2;
  w=(m*1000)*(pow(v,2))/2;
 
  printf("VELOCIDADE = %.2lf\n", v*3.6);
  printf("ESPACO PERCORRIDO = %.2lf\n", s);
  printf("TRABALHO REALIZADO = %.2lf\n", w);
 
 return 0;
} 
#include<stdio.h>
#include<math.h>
 
 int main() {
 
  double r, h, ac, ar, at;
  scanf("%lf %lf", &r, &h);
  
  ac=3.14159*(pow(r,2));
  ar=(3.14159*(2*r))*h;
  at=(2*ac)+ar;
 
  printf("O VALOR DO CUSTO E = %.2lf\n", at*100.0);
 
 return 0;
}
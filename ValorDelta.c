#include<stdio.h>
#include<math.h>
 
int main() {
 
  double a, b, c;
  scanf("%lf %lf %lf", &a,&b,&c);
 
  printf("O VALOR DE DELTA E = %.2lf\n", pow(b,2)-(4*a*c));
 
 return 0;
}
#include <stdio.h>
#include <math.h>
 
int main(){
 
  double a, b, c, delta, x1, x2;
  scanf("%lf %lf %lf", &a, &b, &c);
  
  delta=pow(b,2)-(4*a*c);
  
  if(delta>0){
     x1=((-1*b)+sqrt(delta))/(2*a);
     x2=((-1*b)-sqrt(delta))/(2*a);
     printf("RAIZES DISTINTAS\n");
     printf("X1 = %.2lf\n", x1);
     printf("X2 = %.2lf\n", x2);
             }
  if(delta==0){
      x1=((-1*b)+sqrt(delta))/(2*a);
      printf("RAIZ UNICA\n");
      printf("X1 = %.2lf\n", x1);
              }
  if(delta<0){
       printf("RAIZES IMAGINARIAS");
             }
 
 return 0;
 
}
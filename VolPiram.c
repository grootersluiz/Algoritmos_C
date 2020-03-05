#include <stdio.h>
#include <math.h>
 
int main() {
 
  float h, a, ab, v;
  scanf("%f %f", &h, &a);
  
  ab=(3*pow(a,2)*sqrt(3))/2;
  v=(1*ab*h)/3;
 
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v);
 
 return 0;
}
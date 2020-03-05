#include <stdio.h>
 
int main () {
 
  double a, b, c, d, e, f, z, w, dd, dz, dw;
  scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
 
  dd=(a*e)-(b*d);
  dz=(c*e)-(b*f);
  dw=(a*f)-(c*d);
  z=dz/dd;
  w=dw/dd;
  
  printf("O VALOR DE X E = %.2lf\n", z);
  printf("O VALOR DE Y E = %.2lf\n", w);
 
 return 0;
}
#include <stdio.h>
 
 
 
int main()
{
 
 
  double n, fat=1, k=1;
 
  scanf("%lf", &n);
 
  while(k<=n){
             
              fat=fat*k;
             
              k++;
 
              }
 
  printf("%.lf! = %.lf", n, fat);
 
 return 0; 
 
}
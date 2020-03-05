#include <stdio.h>
 
int main(){
 
 double n, frac=1, num=1, den=1;
 scanf("%lf", &n);
 
 while(frac!=n)
 {
  if(frac<n)
  {
  num++;
  frac=num/den;
  }
   else
   {
   den++;
   frac=num/den;
   }
 } 
 printf("%.lf/%.lf", num, den);
 
 return 0;
}
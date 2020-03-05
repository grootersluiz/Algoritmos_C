#include <stdio.h>
 
int main(){
 
 int n, div=1, somadiv=0;
 scanf("%d", &n);
 
 printf("%d = ", n);
 
 for(div=1; div<n; div++)
 {
  if(n%div==0 && div==1)
  {
  somadiv=somadiv+div;
  printf("%d", div);
  }
   else
   if(n%div==0)
   {
   somadiv=somadiv+div;
   printf(" + %d", div);
   }
 }
  if(somadiv==n)
  {
  printf(" = %d (NUMERO PERFEITO)", somadiv);
  }
   else
   {
   printf(" = %d (NUMERO NAO E PERFEITO)", somadiv);
   }
 return 0;
 }  
#include <stdio.h>
 
 
 
int main(){
 
 
 
 int n, i=1, ii=1, iii=1;
 
 scanf("%d", &n);
 
 
 
 while(i<=n)
 
 {
  
 printf("%d*%d*%d = %d", i, i, i, iii);
   
 iii+=2;
   
  while(ii<i)
   
  {
   
   if(i>1)
  
   {
   
   printf("+%d", iii);
   
   }
 
   ii++;
   
   iii+=2;
   
   }
   
    printf("\n");
 
  ii=1;
 
  i++;
 
  }
 
 return 0;
 
 }
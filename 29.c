#include <stdio.h>
 
int main(){
 
 int n, n1=2, n2, div=1, somadiv=0, rep=2;
 scanf("%d", &n);
 
 while(n>0)
 {
  while(rep>0)
  {
   while(div<=n1/2)
   {
    if(n1%div==0)
    {
    somadiv=somadiv+div;
    }
    div++;
    }
     if(rep==2)
     {
     n2=n1;
     n1=somadiv;  
     } 
      if(rep==1 && somadiv==n2 && n2<n1)
      {
      printf("(%d,%d)\n", n2, n1);
      n--;
      }
  div=1;
  somadiv=0;
  rep--;
  }
  n1=n2;
  n1++;
  rep=2;
 }
return 0;
}
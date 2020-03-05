#include <stdio.h>
 
int main(){
 
 int n, i=1, desordem=0;
 double vl, soma=0, teste;
 
 do
 {
 scanf("%d", &n);
  if(n<=0)
  {
  break;
  }
   else
   {
    while(i<=n)
    {
    scanf("%lf", &vl);
    if(i==n)
    {
    printf("\n");
    }
    soma=soma+vl;
    teste=soma-vl;
    if(vl<teste)
    {
    desordem++;
    }
    soma=vl; 
    i++;
    }
     if(desordem>0)
     {
     printf("DESORDENADA\n");
     }
      else
      if(desordem==0 && i>1) 
      {
       printf("ORDENADA\n");
      }    
    desordem=0;
    soma=0;
    i=1;
    }
 }
 while(n>0);
 
 return 0;
 } 
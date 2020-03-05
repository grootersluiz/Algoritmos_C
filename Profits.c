#include <stdio.h>
 
int main(){
 
 double v, vi, vf, i, n, l, teste1=0, teste2, melhorp, maiorl, ning;
 scanf("%lf %lf %lf", &v, &vi, &vf);
 
 if(vi>=vf)
 {
 printf("INTERVALO INVALIDO\n");
 }
 else
 { 
 i=vi;
 while(i<=vf)
 {
  if(i<v)
  {
  n=120+((v-i)*50);
  l=(n*i)-(200+(n*0.05));
  printf("V: %.2lf, N: %.lf, L: %.2lf\n", i, n, l);
  teste1=teste1+l;
  teste2=teste1-l;
  if(teste1>teste2*2)
  {
  melhorp=i;
  maiorl=l;
  ning=n;
  }
  teste1=l;
  }
   if(i==v)
   {
   n=120;
   l=(n*i)-(200+(n*0.05));
   printf("V: %.2lf, N: %.lf, L: %.2lf\n", i, n, l);
   teste1=teste1+l;
   teste2=teste1-l;
   if(teste1>teste2*2)
   {
   melhorp=i;
   maiorl=l;
   ning=n;
   }
   teste1=l;
   }
    if(i>v)
    {
    n=120-((i-v)*60);
    l=(n*i)-(200+(n*0.05));
    printf("V: %.2lf, N: %.lf, L: %.2lf\n", i, n, l);
    teste1=teste1+l;
    teste2=teste1-l;
    if(teste1>teste2*2)
    {
    melhorp=i;
    maiorl=l;
    ning=n;
    }
    teste1=l;
    }
    i++;
    }
     if(maiorl<=0)
     {
     melhorp=0;
     maiorl=0;
     ning=0;
     }      
      printf("Melhor valor final:  %.2lf\n", melhorp);
      printf("Lucro:  %.2lf\n", maiorl);
      printf("Numero de ingressos:  %.lf\n", ning);
 }
 return 0;
 }
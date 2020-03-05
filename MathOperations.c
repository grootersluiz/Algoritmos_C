#include <stdio.h>
 
int main(){
 
 double n, i, k, s, cont, c1=1, c2=1, c3=1, soma, subt, mult, div;
 scanf("%lf %lf %lf %lf", &n, &i, &k, &s);
 
 printf("Tabuada de soma:\n");
 for(cont=1;cont<=k;cont++)
 {
  soma=n+i;
  printf("%.2lf + %.2lf = %.2lf\n", n, i, soma);
  i=i+s;
 }
 printf("Tabuada de subtracao:\n");
 for(cont=1;cont<=k;cont++)
 {
  while(c1<=k)
  {
  i=i-s;
  c1++;
  }
  subt=n-i;
  printf("%.2lf - %.2lf = %.2lf\n", n, i, subt);
  i=i+s;
 }
 printf("Tabuada de multiplicacao:\n");
 for(cont=1;cont<=k;cont++)
 {
  while(c2<=k)
  {
  i=i-s;
  c2++;
  }
  mult=n*i;
  printf("%.2lf x %.2lf = %.2lf\n", n, i, mult);
  i=i+s;
 }
 printf("Tabuada de divisao:\n");
 for(cont=1;cont<=k;cont++)
 {
  while(c3<=k)
  {
  i=i-s;
  c3++;
  }
  div=n/i;
  printf("%.2lf / %.2lf = %.2lf\n", n, i, div);
  i=i+s;
 }
 return 0;
 }
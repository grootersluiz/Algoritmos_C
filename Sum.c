#include<stdio.h>
 
int main(){
 
 double n, i=1, soma=0;
 scanf("%lf", &n);
 
 if(n<1)
 {
 printf("Numero invalido!");
 }
 else
 {
 while(i<=n)
 {
 soma=soma+(1/i);
 i++;
 }
 printf("%.6lf", soma);
 } 
 return 0;
 }
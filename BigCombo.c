#include <stdio.h>
 
int main(){
 
 int n, el, i, soma=0, teste=0, iguais=1, result=0;
 scanf("%d", &n);
 
 for(i=1;i<=n;i++)
 {
 scanf("%d", &el);
 soma=soma+el;
 teste=soma-el;
 if(teste==el && i>1)
 {
 iguais++;
 result=iguais;
 
 }
 else if(teste!=el && i>1)
 {
 iguais=1;
 }
 teste=0;
 soma=el;
 }
 printf("A maior subsequencia de elementos iguais possui %d elementos.", result);
 
 return 0;
 }
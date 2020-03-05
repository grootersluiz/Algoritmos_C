#include <stdio.h>
 
int main(){
 
 int n, el, i, soma=0, teste=0, cresc=0, seg=0;
 scanf("%d", &n);
 
 for(i=1;i<=n;i++)
 {
 scanf("%d", &el);
 soma=soma+el;
 teste=soma-el;
 if(el>teste && i>1)
 {
 cresc++;
 seg=cresc;
 
 }
 else if(el<teste)
 {
 cresc=0;
 }
 teste=0;
 soma=el;
 }
 printf("O comprimento do segmento crescente maximo e:  %d", seg);
 
 return 0;
 }
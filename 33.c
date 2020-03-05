#include <stdio.h>
 
int main(){
  
  int n, cont=2, fator;
  scanf("%d", &n);
 
  while(n<=1){
              printf("Fatoracao nao e possivel para o numero %d!\n", n);
              scanf("%d", &n);
              }
  printf("%d = ", n);
  
  while(n>1){
             while(n%cont!=0){
                              cont++;
                               }
             fator=n/cont;
             n=fator;
             printf("%d", cont);
             if(n!=1){
                      printf(" x ");
                       }
                   
}
  printf("\n");
 return 0;
}
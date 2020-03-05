#include <stdio.h>
 
int main(){
 
 int n, i=1, quad;
 scanf("%d", &n);
 
 while(n>5 && n<2000 && i<=n)
 {
  if(i%2==0){
             quad=i*i;
             printf("%d^2 = %d\n", i, quad);
            }
  i++;
 } 
 return 0;
 }
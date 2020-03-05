#include <stdio.h>
 
 int main() {
 
 int n, k=1, i=1, j=1; 
 scanf("%d", &n);
 
 if(n<2)
 {
 printf("Campeonato invalido!");
 }
 else
 {
 while(i<=n-1)
 {
 while(j<n)
 {
 printf("Final %d: Time%d X Time%d\n", k, i, j+1);
 k++;
 j++;
 }
 i++;
 j=i;
 }
 }
 return 0;
 }
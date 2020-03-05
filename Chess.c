#include <stdio.h>
 
int main(){
 
 int n, total;
 scanf("%d", &n);
 
 total=n+((n*2)*31)+n*32;
 printf("%d", total);
 
  return 0;
 }
#include<stdio.h>
 
int main(){
 
 int a1, r, n, i=1, prog=0;
 scanf("%d %d %d", &a1, &r, &n);
 
 while(i<=n)
 {
 prog=prog+(a1+((i-1)*r));
 i++;
 }
 printf("%d\n", prog);
 return 0;
 }
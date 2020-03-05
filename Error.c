#include <stdio.h>
 
int main(){
 
 double n, e, err, r;
 scanf("%lf %lf", &n, &err);
 
 r=1;
 e=err+1;
 
 while(e>err)
 {
 r=(r+n/r)/2;
 e=(r*r)-n;
 
 printf("r: %.9lf, erro: %.9lf\n", r, e);
 }
 return 0;
 }
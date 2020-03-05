#include <stdio.h>
 
int main(){
 
 int n;
 double par=0, imp=0, i1=0, i2=0, media1, media2;
 
 do{
 scanf("%d", &n);
 if(n==0)
 {
 break;
 }
 if(n%2==0)
 {
 i1++;
 par+=n;
 }
 else
 {
 i2++;
 imp+=n;
 }
 }
 while(n!=0);
 media1=par/i1;
 media2=imp/i2;
 printf("MEDIA PAR: %.2lf\n", media1);
 printf("MEDIA IMPAR: %.2lf\n", media2);
 return 0;
 }
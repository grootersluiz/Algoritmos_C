#include<stdio.h>
 
int main(){
 
 int x, y, ndiv=1;
 scanf("%d %d", &x, &y);
 
 if(x%2!=0)
 {
 printf("O PRIMEIRO NUMERO NAO E PAR\n");
 }
 else{
 while(ndiv<=y)
 {
 if(x%2==0)
 {
 printf("%d ", x);
 ndiv++;
 }
 x++;
 }
 printf("\n");
 }
 return 0;
 }
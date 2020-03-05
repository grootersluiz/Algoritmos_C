#include <stdio.h>
 
int main(){
 
 int m, n, i=2, ii=1;
 scanf("%d %d", &m, &n);
 
 while(i<=m && m>1 && n>1)
 {
  while(ii<i && ii<=n)
  {
   printf("(%d,%d)", i, ii);
   if(ii<i-1 && ii<n)
   {
   printf("-");
   }  
    else
    {
     printf("\n");
    }
  ii++;
  }
 i++;
 ii=1;
 }
 return 0;
}
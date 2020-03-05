#include <stdio.h>
#include <math.h>
 
int main(){
 
 int hip, i=2, c1=1, c2=1;
 scanf("%d", &hip);
 
 while(i<=hip)
 {
  while(c1<hip)
  {
   while(c2<hip)
   {
    if((pow(c1,2)+pow(c2,2))==pow(i,2) && c1<=c2) 
    {
    printf("hipotenusa = %d, catetos %d e %d\n", i, c1, c2);
    }
   c2++;
   }
  c1++;
  c2=1;
  }
 i++;
 c1=1;
 }
 return 0;
}
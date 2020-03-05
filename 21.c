#include <stdio.h>
 
int main(){
 
 int nt, i=1, n1, n2, cent1, dez1, uni1, cent2, dez2, uni2;
 scanf("%d", &nt);
 
 while(i<=nt)
 {
 scanf("%d %d", &n1, &n2);
 
  cent1=n1/100;
  dez1=(n1%100)/10;
  uni1=n1%10;
  n1=(uni1*100)+(dez1*10)+cent1;
   cent2=n2/100;
   dez2=(n2%100)/10;
   uni2=n2%10;
   n2=(uni2*100)+(dez2*10)+cent2;
    if(n1>n2)
    {
    printf("%d\n", n1);
    }
     else
     {
     printf("%d\n", n2);
     }
 i++;
 } 
 return 0;
}
    
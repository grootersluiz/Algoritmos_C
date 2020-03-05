#include<stdio.h>
 
int main(){ 
 
 int pop1, pop2, anos=1;
 scanf("%d %d", &pop1, &pop2);
 
 while(pop1<=pop2)
 {
  pop1=(pop1*0.015)+pop1;
  anos++;
 }
 printf("ANOS = %d\n", anos);
 return 0;
 }
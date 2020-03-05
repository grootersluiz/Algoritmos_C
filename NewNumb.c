#include <stdio.h>
 
int main() {
 
  int a, result;
  scanf("%d", &a);
 
  result=(((a/10)/10)+(((a/10)%10)*3)+((a%10)*5))%7;
  
  printf("O NOVO NUMERO E = %d\n", (a*10)+result);
 
 return 0;
}
#include <stdio.h>
 
int main(){
 
 int horas, pgnt;
 scanf("%d", &horas);
 
 pgnt=((horas/3)*10.00)+((horas%3)*5.00);
 
 printf("O VALOR A PAGAR E = %d.00\n", pgnt);
 
 return 0;
}
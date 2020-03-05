#include <stdio.h>
 
 int main(){
 
  double slinicial, slfinal;
  scanf("%lf", &slinicial);
 
  if(slinicial<=300.00){
                        slfinal=slinicial*1.5;
                        printf("SALARIO COM REAJUSTE = %.2lf\n", slfinal);
                        }
  else {
        slfinal=slinicial*1.3;
        printf("SALARIO COM REAJUSTE = %.2lf\n", slfinal);
       }
 return 0;
}
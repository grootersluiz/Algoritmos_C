#include<stdio.h>
 
 int main() {
 
 double sm, qtdkw, c1, ct, d;
 scanf("%lf", &sm);
 scanf("%lf", &qtdkw);
 c1=(sm*0.7)/100; 
 ct=c1*qtdkw;
 d=ct*0.1;
 
 printf("Custo por kW: R$ %.2lf\n", c1);
 printf("Custo do consumo: R$ %.2lf\n", ct);
 printf("Custo com desconto: R$ %.2lf\n", ct-d);
 
 return 0;
}
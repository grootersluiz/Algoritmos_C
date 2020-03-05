#include<stdio.h>
 
 
int main() {
 
  double tempf, inch, tempc, mm;
  scanf("%lf %lf", &tempf, &inch);
 
  tempc=(5*(tempf-32)/9);
  mm=inch*25.4;
 
  printf("O VALOR EM CELSIUS = %.2lf\n", tempc);
  printf("A QUANTIDADE DE CHUVA E = %.2lf\n", mm);
 
 return 0;
}
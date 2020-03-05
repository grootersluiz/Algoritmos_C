#include <stdio.h>
 
int main() {
 
  int nconta;
  float consagua, total;
  char tpcliente;
  
  scanf("%d %f %c", &nconta, &consagua, &tpcliente);
   
  if(tpcliente=='R') {
                      total=5.00+(consagua*0.05);
                      
                      printf("CONTA = %d\n", nconta);
                      printf("VALOR DA CONTA = %.2f\n", total);
                      }
  else
  if(tpcliente=='C' && consagua <=80){
                      total=500.00;
                      printf("CONTA = %d\n", nconta);
                      printf("VALOR DA CONTA = %.2f\n", total);
                      }
  else
  if(tpcliente=='C' && consagua>80){
                      total=500.00+((consagua-80)*0.25);
                      printf("CONTA = %d\n", nconta);
                      printf("VALOR DA CONTA = %.2f\n", total);
                      }
  else
  if(tpcliente=='I' && consagua<=100){
                      total=800.00;
                      printf("CONTA = %d\n", nconta);
                      printf("VALOR DA CONTA = %.2f\n", total);
                      }
  else
  if(tpcliente=='I' && consagua>100){
                      total=800.00+((consagua-100)*0.04);
                      printf("CONTA = %d\n", nconta);
                      printf("VALOR DA CONTA = %.2f\n", total);
                      }
 return 0;
} 
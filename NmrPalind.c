#include <stdio.h>
 
int main(){
 
  int n1, d1, d2, d3, d4, d5, result;
  scanf("%d", &n1);
 
  if(n1<10 || n1>99999){
               printf("NUMERO INVALIDO");
              }
  else
  if(n1>9999 && n1<100000){
                           d1=n1/10000;
                           d2=(n1%10000)/1000;
                           d3=(n1%1000)/100;
                           d4=(n1%100)/10;
                           d5=n1%10;
  result=(d5*10000)+(d4*1000)+(d3*100)+(d2*10)+d1;
  if(result==n1){
                 printf("PALINDROMO");
                }
  else{
       printf("NAO PALINDROMO");
      }
} 
  else
  if(n1>999 && n1<10000){
                         d1=n1/1000;
                         d2=(n1%1000)/100;
                         d3=(n1%100)/10;
                         d4=n1%10;                         
  result=(d4*1000)+(d3*100)+(d2*10)+d1;
  if(result==n1){
                 printf("PALINDROMO");
                }
  else{
       printf("NAO PALINDROMO");
      }
} 
  else
  if(n1>99 && n1<1000){
                       d1=n1/100;
                       d2=(n1%100)/10;
                       d3=n1%10;
  result=(d3*100)+(d2*10)+d1;
  if(result==n1){
                 printf("PALINDROMO");
                }
  else{
       printf("NAO PALINDROMO");
      }
}
  else
  if(n1>9 && n1<100){
                     d1=n1/10;
                     d2=n1%10;
  result=(d2*10)+d1;
  if(result==n1){
                 printf("PALINDROMO");
                }
  else{
       printf("NAO PALINDROMO");
      }
}
  
 return 0;
}
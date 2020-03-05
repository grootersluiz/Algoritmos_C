#include <stdio.h>
 
int main() {
 
  int n1, d1, d2, d3, d4, d5, d6, d7, d8, dia, mes, ano;
  scanf("%d", &n1);
  
  d1=n1/10000000;
  d2=(n1%10000000)/1000000;
  d3=(n1%1000000)/100000;
  d4=(n1%100000)/10000;
  d5=(n1%10000)/1000;
  d6=(n1%1000)/100;
  d7=(n1%100)/10;
  d8=n1%10;
  dia=(d1*10)+d2;
  mes=(d3*10)+d4;
  ano=(d5*1000)+(d6*100)+(d7*10)+d8;
 
  if(dia>28 && mes==2 || dia>31 || dia<1 || mes>12 || dia>30 && mes==4 || dia>30 && mes==6 || dia>30 && mes==9 || dia>30 && mes==11){
                                                                                                                                  printf("Data invalida!");
                                                                                                                                        }
  else
  switch(mes){
 
  case 1: printf("%d de janeiro de %d", dia, ano);
  break;
  case 2: printf("%d de fevereiro de %d", dia, ano);
  break;
  case 3: printf("%d de marco de %d", dia, ano);
  break;
  case 4: printf("%d de abril de %d", dia, ano);
  break;
  case 5: printf("%d de maio de %d", dia, ano);
  break;
  case 6: printf("%d de junho de %d", dia, ano);
  break;
  case 7: printf("%d de julho de %d", dia, ano);
  break;
  case 8: printf("%d de agosto de %d", dia, ano);
  break;
  case 9: printf("%d de setembro de %d", dia, ano);
  break;
  case 10: printf("%d de outubro de %d", dia, ano);
  break;
  case 11: printf("%d de novembro de %d", dia, ano);
  break;
  case 12: printf("%d de dezembro de %d", dia, ano);
  break;  
   
  }
 return 0;
 
}
#include <stdio.h>
 
int main(){
 
  int carb, drock, resist;
  scanf("%d %d %d", &carb, &drock, &resist);
 
  if(carb<7 && drock>50 && resist>80000){
                                         printf("ACO DE GRAU = 10\n");
                                        }
  if(carb<7 && drock>50 && resist<=80000){
                                         printf("ACO DE GRAU = 9\n");
                                        }
  if(carb<7 && drock<=50 && resist<=80000){
                                         printf("ACO DE GRAU = 8\n");
                                        }
  if(carb>=7 && drock<=50 && resist<=80000){
                                         printf("ACO DE GRAU = 7\n");
                                        }  
 
 return 0;
}

#include <stdio.h>
 
int main() {
 
  int n1, mil, cent , dez, uni;
  scanf("%d", &n1);
 
  mil=n1/1000;
  cent=(n1%1000)/100;
  dez=((n1%1000)%100)/10;
  uni=n1%10;
  
  if(n1>9999){
              printf("Numero Invalido!");
             }
  if(n1>999 && n1<10000){
                         printf("(quarta ordem) %d = ", n1);
  if(mil==1){
             printf("%d unidade de milhar ", mil);
            }
  if(mil>1){
            printf("%d unidades de milhar ", mil);
           }
  if(cent>0){
             printf("+ ");
            }   
  if(cent==1){
              printf("%d centena ", cent);
             } 
  if(cent>1){
             printf("%d centenas ", cent);
            }
  if(dez>0){ 
            printf("+ ");
           } 
  if(dez==1){
             printf("%d dezena ", dez);
            }
  if(dez>1){
            printf("%d dezenas ", dez);
           } 
  if(uni>0){
            printf("+ ");
           } 
  if(uni==1){
             printf("%d unidade ", uni);
            }    
  if(uni>1){
            printf("%d unidades ", uni);
           }
  printf("= %d", mil*1000);
  if(cent>=1){
              printf(" + %d", cent*100);
             }
  if(dez>=1){
             printf(" + %d", dez*10);
            } 
  if(uni>=1){
             printf(" + %d", uni);
            } 
 }
  cent=n1/100;
  dez=(n1%100)/10;
  
  if(n1>99 && n1<1000){
                       printf("(terceira ordem) %d = ", n1);
  if(cent==1){
              printf("%d centena ", cent);
             } 
  if(cent>1){
             printf("%d centenas ", cent);
            }
  if(dez>0 || uni>0){ 
                     printf("+ ");
                    }
  if(dez==1){
             printf("%d dezena ", dez);
            }
  if(dez>1){
            printf("%d dezenas ", dez);
           } 
  if(uni>0){
            printf("+ ");
           }         
  if(uni==1){
             printf("%d unidade ", uni);
            }    
  if(uni>1){
            printf("%d unidades ", uni);
           }
  printf("= %d", cent*100);
  if(dez>=1){
             printf(" + %d", dez*10);
            }
  if(uni>=1){
             printf(" + %d", uni);
            }
 }  
  dez=n1/10;
  
  if(n1>9 && n1<100){
                     printf("(segunda ordem) %d = ", n1);
  if(dez==1){
             printf("%d dezena ", dez);
            }
  if(dez>1){
            printf("%d dezenas ", dez);
           } 
  if(uni>0){
            printf("+ ");
           }
  if(uni==1){
             printf("%d unidade ", uni);
            }    
  if(uni>1){
            printf("%d unidades ", uni);
           }
  printf("= %d", dez*10);
  if(uni>=1){
             printf(" + %d", uni);
            }
 }
  if(n1>0 && n1<10){
                    printf("(primeira ordem) %d = ", n1);
  if(uni==1){
             printf("%d unidade ", uni);
            }    
  if(uni>1){
            printf("%d unidades ", uni);
           }
  if(uni>=1){
             printf("= %d", uni);
            }
} 
  
 return 0;
 
}
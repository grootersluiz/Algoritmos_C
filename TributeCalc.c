#include <stdio.h>
 
int main(){
 
  int mat, dep;
  double smin, sfunc, tx, imppg, imp, impl, nsal;
  scanf("%d %lf %d %lf %lf", &mat, &smin, &dep, &sfunc, &tx);
 
  tx=tx/100.0;
  imppg=sfunc*tx;
  nsal=sfunc/smin;
 
  if(nsal>12){
              imp=(sfunc*0.2)-(dep*300.00);
              impl=imp-imppg;
              printf("MATRICULA = %d\n", mat);
              printf("IMPOSTO BRUTO = %.2lf\n", sfunc*0.2);
              printf("IMPOSTO LIQUIDO = %.2lf\n", imp);
              printf("RESULTADO = %.2lf\n", impl);
  if(impl>0){
             printf("IMPOSTO A PAGAR");
            }
  if(impl==0){
              printf("IMPOSTO QUITADO");
             }
  if(impl<0){
             printf("IMPOSTO A RECEBER");
            }
}       
              
  if(nsal>5 && nsal<=12){                
              imp=(sfunc*0.08)-(dep*300.00);
              impl=imp-imppg;
              printf("MATRICULA = %d\n", mat);
              printf("IMPOSTO BRUTO = %.2lf\n", sfunc*0.08);
              printf("IMPOSTO LIQUIDO = %.2lf\n", imp);
              printf("RESULTADO = %.2lf\n", impl);
  if(impl>0){
             printf("IMPOSTO A PAGAR");
            }
  if(impl==0){
              printf("IMPOSTO QUITADO");
             }
  if(impl<0){
             printf("IMPOSTO A RECEBER");
            }
}
  
  if(nsal<=5){
              imp=0-(dep*300.00);
              impl=imp-imppg;
              printf("MATRICULA = %d\n", mat);
              printf("IMPOSTO BRUTO = %.2lf\n", sfunc*0);
              printf("IMPOSTO LIQUIDO = %.2lf\n", imp*100);
              printf("RESULTADO = %.2lf\n", impl);
  if(impl>0){
             printf("IMPOSTO A PAGAR");
            }
  if(impl==0){
              printf("IMPOSTO QUITADO");
             }
  if(impl<0){
             printf("IMPOSTO A RECEBER");
            }
}
 
 return 0;
}
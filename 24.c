#include <stdio.h>
 
int main (){
 
 unsigned long int cdmerc, mlucro, mvend;
 double prcomp, prvend, lucro, perc10, perc20, teste1=0, teste2=0, soma1=0, soma2=0;
 int nvend, total1=0, total2=0, total3=0, i;
 i=6;
 while(i>0)
 {
 scanf("%ld %lf %lf %d", &cdmerc, & prcomp, &prvend, &nvend);
 
    lucro=prvend-prcomp;
    perc10=prcomp*0.1;
    perc20=prcomp*0.2;
    if(lucro<perc10)
    {
    total1++;
    }
     if(lucro>=perc10 && lucro<=perc20)
     {
     total2++;
     }  
      if(lucro>perc20)
      {
      total3++;
      }  
       if(teste1<=lucro)
       {
       mlucro=cdmerc;
       teste1=lucro;
       }
        if(teste2<=nvend)
        {
        mvend=cdmerc;
        teste2=nvend;
        }
           soma1=soma1+(prcomp*nvend);
           soma2=soma2+(prvend*nvend);
 i--;  
 }
             lucro=soma2-soma1;
             lucro=(lucro*100)/soma1;
            
            printf("Quantidade de mercadorias que geraram lucro menor que 10%%:  %d\n", total1);
            printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%:  %d\n", total2);
            printf("Quantidade de mercadorias que geraram lucro maior do que 20%%:  %d\n", total3);
            printf("Codigo da mercadoria que gerou maior lucro:  %ld\n", mlucro);
            printf("Codigo da mercadoria mais vendida:  %ld\n", mvend);
            printf("Valor total de compras:  %.2lf, valor total de vendas:  %.2lf e percentual de lucro total: %.2lf%\n", soma1, soma2, lucro);
 
 return 0;
}
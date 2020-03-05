#include <stdio.h>
 
int main()
{
 unsigned int mat, i1=1, i2=1;
 double np, nl, nt, pres, soma1=0, soma2=0, media1, media2, nf;
 
 do{
 scanf("%d", &mat);
 while(i1<=8)
 {
 scanf("%lf", &np);
 soma1=soma1+np;
 i1++;
 }
 i1=1;
 media1=soma1/8;
 while(i2<=5)
 {
 scanf("%lf", &nl);
 soma2=soma2+nl;
 i2++;
 }
 i2=1;
 media2=soma2/5;
 scanf("%lf %lf", &nt, &pres);
 nf=0.7*(media1)+(0.15*(media2))+(0.15*nt);
 soma1=0;
 soma2=0;
 if(mat==-1)
 {
 break;
 }
 else if(nf>=6 && pres>=96)
 {
  printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  APROVADO\n", mat, nf);
 }
 else if(nf>=6 && pres<96)
 {
  printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR FREQUENCIA\n", mat, nf);
 }
 else if(nf<6 && pres>=96)
 {
  printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR NOTA\n", mat, nf);
 }
 else if(nf<6 && pres<96)
 {
  printf("Matricula:  %d, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR NOTA E POR FREQUENCIA\n", mat, nf);
 } 
 }
 while(mat!=-1);
 return 0;
 } 
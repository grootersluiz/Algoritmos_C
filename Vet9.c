#include <stdio.h>
#include <math.h>
 
int main()
{
    int n, i, j, k, l;
    double va[3], vb[3], soma=0;
    scanf("%d", &n);
    for(i=0;i<3;i++)
    {
        scanf("%lf", &va[i]);
    }
     double vr[n-1];
     for(j=0;j<n-1;j++)
     {
           for(k=0;k<3;k++)
           {
               scanf("%lf", &vb[k]);
               soma=soma + pow(va[k]-vb[k],2);
               va[k]=vb[k];
           }
            vr[j]=sqrt(soma);
            soma=0;
     }
      for(l=0;l<n-1;l++)
      {
          printf("%.2lf\n", vr[l]);
      }
    return 0;
}
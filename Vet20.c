#include <stdio.h>
 
int main()
{
    int n, i, j;
    double va[3], vb[3], sub=0, resp=0;
    scanf("%d", &n);
    for(i=0;i<3;i++)
    {
        scanf("%lf", &va[i]);
    }
     double vr[n-1];
     for(i=0;i<n-1;i++)
     {
           for(j=0;j<3;j++)
           {
               scanf("%lf", &vb[j]);
               sub=va[j]-vb[j];
               if(sub<0)
               {
                  sub=sub*(-1);
               }
               va[j]=vb[j];
               if(sub>resp)
               {
                  resp=sub;
               }
           }
            vr[i]=resp;
            sub=0;
            resp=0;
     }
      for(i=0;i<n-1;i++)
      {
          printf("%.2lf\n", vr[i]);
      } 
 
    return 0;
}    
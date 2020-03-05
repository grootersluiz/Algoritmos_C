#include <stdio.h>
 
int main()
{
    int n, i, x, mem;
    scanf("%d", &n);
    double vet[n], mediana;
    for(i=0;i<n;i++)
    {
        scanf("%lf", &vet[i]);
    }
     for(i=1;i<n;i++)
     {
         mem=i;
         while(mem>0 && vet[mem]<vet[mem-1])
         {
               x=vet[mem-1];
               vet[mem-1]=vet[mem];
               vet[mem]=x;
               mem--;
         }
     }        
      if(n%2==0)
      {
         mediana=(vet[n/2]+vet[(n/2)-1])/2;
      }
       if(n%2!=0)
       {
           mediana=vet[(n/2)];
       }
        printf("%.2lf\n", mediana);
 
    return 0;
}
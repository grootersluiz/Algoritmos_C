#include <stdio.h>
 
int main()
{
    int n1, n2, n, x, mem, i, j , k;
    scanf("%d", &n1);
    scanf("%d", &n2);
    n=n1+n2;
    int vet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
    }
     for(j=1;j<n;j++)
     {
         mem=j;
         while(mem>0 && vet[mem]<vet[mem-1])
         {
               x=vet[mem-1];
               vet[mem-1]=vet[mem];
               vet[mem]=x;
               mem--;
         }
     }
      for(k=0;k<n;k++)
      {
          printf("%d\n", vet[k]);
      }
 
    return 0;
}
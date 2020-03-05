#include <stdio.h>
 
int main()
{
    int n, i, j, total=0, freq, maior=0;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
    }
     freq=vet[0]; 
     for(j=0;j<n;j++)
     {
         for(i=0;i<n;i++)
         {
             if(vet[j]==vet[i])
             {
                total++;
             }
         }
          if(total==maior && vet[j]<freq)
          {
             freq=vet[j];
             maior=total;
          }
           else if(total>maior)
           {
                   freq=vet[j];
                   maior=total;
           }
            total=0;
      }
       printf("%d\n%d", freq, maior);   
 
    return 0;
}
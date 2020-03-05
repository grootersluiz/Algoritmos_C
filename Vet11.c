#include <stdio.h>
 
int main ()
{
    int n, i, maior=0, menor;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]>maior)
        {
           maior=vet[i];
        }
    }
     menor=vet[0];
     for(i=0;i<n;i++)
     {
         if(vet[i]<menor)
         {
            menor=vet[i];
         }
     }
      for(i=0;i<n;i++)
      {
          if(i==n-1)
          {
             printf("%d\n", vet[i]);
          }
           else
           {
               printf("%d ", vet[i]);
           }
      }
       for(i=n-1;i>=0;i--)
       {
           if(i==0)
           {
              printf("%d\n", vet[i]);
           }
            else
            {
                printf("%d ", vet[i]);
            }
       } 
        printf("%d\n%d\n", maior, menor);
 
    return 0;
}
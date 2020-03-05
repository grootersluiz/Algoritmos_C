#include <stdio.h>
 
int main()
{
    int n, i;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
    }
     for(i=0;i<n;i++)
     {
      if(i==0)
      {
         printf("%d\n", vet[i]);
      }
       if(i>0 && vet[i]!=vet[i-1])
       {
          printf("%d\n", vet[i]);
       }
     }
 
    return 0;
}
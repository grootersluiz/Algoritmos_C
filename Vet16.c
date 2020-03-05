#include <stdio.h>
 
int main()
{
    int n, lim, i;
    scanf("%d %d", &n, &lim);
    int vet[n], soma=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]<=0)
        {
           soma++;
        }
    }
     if(soma<lim)
     {
        printf("SIM\n");
     }
      else
      {
          printf("NAO\n");
          int vet2[soma], aux=0;
          for(i=0;i<n;i++)
          {
              if(vet[i]<=0 && aux<soma)
              {
                 vet2[aux]=i+1;
                 aux++;
              }
          }
           for(i=soma-1;i>=0;i--)
           {
               printf("%d\n", vet2[i]);
           }
      }
 
    return 0;
}
#include <stdio.h>
 
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int vet[n], soma=0, iguais=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
    }
     for(j=0;j<n;j++)
     {
         for(i=0;i<n;i++)
         {
             if(vet[j]==vet[i])
             {
                soma++;
             }
         }
          if(soma==1)
          {
             iguais++;
          }
           soma=0;
     }
      printf("%d\n", iguais);
 
    return 0;
}
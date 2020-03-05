#include <stdio.h>
 
int main()
{
    int i, c=0, r, d, s, m;
    int vet[500], vet2[500];
    while(scanf("%d", &vet[i]) != EOF)
    {
          c++;
    }
     for(i=0;i<c;i++)
     {
         s=0;
         m=1;
         while(vet[i] != 0)
         {
               d=vet[i]/2;
               r=vet[i]%2;
               s+= r*m;
               m*=10;
               vet[i]=d;
         }
          vet2[i]=s;
     }
      for(i=0;i<c;i++)
      {
          printf("%d\n", vet2[i]);
      }
     
       return 0;
}
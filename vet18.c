#include <stdio.h>
 
int main()
{
    int n, i, j, vet[11], s1=0, s2=0, x=9;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<11;j++)
        {
            scanf("%d", &vet[j]);
            if(j<9)
            {
               s1+=vet[j]*(j+1);
               s2+=vet[j]*x;
               x--;
            }
        }
     if(vet[9]>0 && s1%11==vet[9] && vet[10]>0 && s2%11==vet[10])
     {
        printf("CPF valido\n");
     }
      else if(vet[9]>0 && s1%11==vet[9] && vet[10]==0 && s2%11==10)
      {
         printf("CPF valido\n");
      }
       else if(vet[9]==0 && s1%11==9 && vet[10]>0 && s2%11==vet[10])
       {
          printf("CPF valido\n");
       }
       else if(vet[9]==0 && s1%11==10 && vet[10]==0 && s2%11==10)
       {
          printf("CPF valido\n");
       }
        else
        {
            printf("CPF invalido\n");
        }
         s1=0;
         s2=0;
         x=9;
    }
 
    return 0;
}
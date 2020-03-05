#include <stdio.h>
 
void insert(int n, int *vet)
{
    int x, mem, i;
    for(i=1;i<n;i++)
    {
        mem=i;
        while(mem>0 && vet[mem]<vet[mem-1])
        {
              x=vet[mem];
              vet[mem]=vet[mem-1];
              vet[mem-1]=x;
              mem--;
        }
    }
}
 
int main()
{
    int n, i, pr=0, im=0;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
        if(vet[i]==0 || vet[i]%2==0)
        {
           pr++;
        }
         else
         {   
             im++;
         }
    }
     int par[pr], imp[im], x=0, y=0;
     for(i=0;i<n;i++)
     {
         if(vet[i]==0 || vet[i]%2==0)
         {
            par[x]=vet[i];
            x++;
         }
          else
          {   
              imp[y]=vet[i];
              y++;
          }         
     }
      insert(pr,par);
      insert(im,imp);
      for(i=0;i<pr;i++)
      {
          printf("%d\n", par[i]);
      }      
       for(i=im-1;i>=0;i--)
       {
           printf("%d\n", imp[i]);
       } 
     
    return 0;
}    
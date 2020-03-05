#include <stdio.h>
#include <math.h>
 
int main()
{
    int dig=1, fin;
    do
    {
      int n;
      scanf("%d %d", &dig, &fin);
      if(dig==0) break;
      scanf("%d", &n);
      int vet[dig], i, x=dig-1, j, maior, resp[fin], y=1, men=0, ind; 
      for(i=0;i<dig;i++)
      {
          vet[i]=n/pow(10,x);
          n=n-(vet[i]*pow(10,x));
          x--;
      }
       maior=vet[0];
       ind=0;
       for(j=0;j<dig;j++)
       {
           if(j<=(dig-fin) && vet[j]>maior)
           {
              maior=vet[j];
              ind=j;
           }
            if(j<=(dig-fin) && vet[j]==maior && j>ind)
            {
               resp[y]=vet[j];
               y++;                   
            }
             for(i=0;i<dig;i++)
             {
                 if(j>(dig-fin) && vet[j]<vet[i])
                 {
                    men++;
                 }
             }
              resp[0]=maior;
              if(j>(dig-fin) && men<fin && y<fin)
              {
                 resp[y]=vet[j];
                 y++;
              }  
               men=0;
        }
         for(i=0;i<fin;i++)
         {
             printf("%d", resp[i]);
         }
          printf("\n");
    }while(dig!=0);  
    
    return 0;
}
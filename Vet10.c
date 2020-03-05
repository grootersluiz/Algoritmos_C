#include <stdio.h>
 
int main()
{
    int n, i, total=0, maior, indice=0;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &vet[i]);
    }
     maior=vet[0];
     for(i=0;i<n;i++)
     {
         if(vet[n-1]==vet[i])
         {
            total++;
         }
          if(vet[i]>maior)
          {
             maior=vet[i];
             indice=i;
          }
     }
      printf("Nota %d, %d vezes\nNota %d, indice %d\n", vet[n-1], total, maior, indice); 
 
    return 0;
}
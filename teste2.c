#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, soma=0;
    scanf("%d", &n);
    int vet[n];
    for(i=0;i<n;i++)
    {
         scanf("%d", &vet[i]);
         soma=soma+vet[i];
    }
     printf("%d\n", soma);

 return 0;
}

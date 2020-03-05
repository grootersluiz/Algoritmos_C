#include <stdio.h>
 
int main()
{   
    int n, i, x, mem;
    scanf("%d", &n);
    int v[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
     for(i=1;i<n;i++)
     {
         mem=i;
         while(mem>0 && v[mem]<v[mem-1])
         {
               x=v[mem-1];
               v[mem-1]=v[mem];
               v[mem]=x;
               mem--;
         }
     }
      for(i=0;i<n;i++)
      {
 
          printf("%d\n", v[i]);
      }
 
    return 0;
}
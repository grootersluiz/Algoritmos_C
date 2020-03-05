#include <stdio.h>
 
int main()
{
 
    int n, teste, qtddiv=0, i;
    scanf("%d", &n);
 
    if(n<0)
    {
        printf("Numero Invalido!");
    }
    else
    {
 
        for(i=1; i<=n; i++)
        {
            teste=n/i;
            if(n%i==0)
            {
                qtddiv++;
            }
        }
        if(qtddiv==2)
        {
            printf("PRIMO");
        }
        else
        {
            printf("NAO PRIMO");
        }
    }
 
 
 
    return 0;
}
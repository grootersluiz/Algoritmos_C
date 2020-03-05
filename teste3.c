#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, i, j, num=1;
    scanf("%d%d", &m, &n);
    int mat[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat[i][j]=num;
            num++;
        }
        j=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1)
            {
                printf("[%d]\n", mat[i][j]);
            }
            else
                printf("[%d] ", mat[i][j]);
        }
        j=0;
    }

 return 0;
}

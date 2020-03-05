#include <stdio.h>
 
int main()
{
    int nv, a, mai, teste=0, i, j , k, l;
 
    do
    {
        scanf("%d", &nv);
        if(nv>0)
        {
            int v[nv];
            for(i=0; i<nv; i++)
            {
                scanf("%d", &v[i]);
            }
            mai=v[0];
            for(j=0; j<nv; j++)
            {
                if(j>0 && v[j]>mai)
                {
                    mai=v[j];
                }
            }
            for(k=0; k<=mai; k++)
            {
                for(l=0; l<nv; l++)
                {
                    if(v[l]<=k)
                    {
                        teste++;
                    }
                }
                printf("(%d) %d\n", k, teste);
                teste=0;
            }
        }
    }
    while(nv>0);
    return 0;
}
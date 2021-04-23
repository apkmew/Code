/*
 TASK: Wave Create
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[400][400];
int main()
{
    int b,n,i=0,j=0,k,l,q;
    scanf("%d",&q);
    while(q--)
    {
        i=0;
        j=0;
        scanf("%d",&n);
        if(n==1)
        {
            printf("#");
            continue;
        }
        for(k=0; k<(n-1)*4+1; k++)
        {
            for(l=0; l<(n-1)*4+1; l++)
            {
                a[k][l]='.';
            }
        }
        for(b=0; b<((n-1)*4-1)*((n-1)*4-1); b++)
        {
            for(; j<(n-1)*4+1; j++)
            {
                if(a[i][j+2]=='#' || j==(n-1)*4)
                    break;
                a[i][j]='#';
            }
            for(; i<(n-1)*4+1; i++)
            {
                if(a[i+2][j]=='#' || i==(n-1)*4)
                    break;
                a[i][j]='#';
            }
            for(; j>=0; j--)
            {
                if(a[i][j-2]=='#' || j==0)
                    break;
                a[i][j]='#';
            }
            for(; i>=0; i--)
            {
                if(a[i-2][j]=='#' || i==0)
                    break;
                a[i][j]='#';
            }
            if(a[i+2][j]=='#' && a[i-2][j]=='#' && a[i][j+2]=='#' && a[i-2][j]=='#')
                break;
        }
        a[2*n-2][2*n-2]='#';
        for(i=0; i<(n-1)*4+1; i++)
        {
            for(j=0; j<(n-1)*4+1; j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        for(k=0; k<(n-1)*4+1; k++)
        {
            for(l=0; l<(n-1)*4+1; l++)
            {
                a[k][l]='.';
            }
        }
    }
    return 0;
}

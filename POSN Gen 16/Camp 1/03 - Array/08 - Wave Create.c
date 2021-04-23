/*
    TASK: Wave Create
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
char a[500][500];
int main()
{
    int q,n,i,j,k;
    scanf("%d",&q);
    while(q--){
    scanf("%d",&n);
    for(i=0;i<4*n-3;i++){
        for(j=0;j<4*n-3;j++){
            a[i][j] = '.';
        }
    }
    i=0,j=0;
    k=n;
    while(k--){
        for(;j<4*n-3;j++){
            a[i][j]='#';
            if(a[i][j+2]=='#' || j==4*n-4)
                break;
        }
        for(;i<4*n-3;i++){
            a[i][j]='#';
            if(a[i+2][j]=='#' || i==4*n-4)
                break;
        }
        for(;j>=0;j--){
            a[i][j]='#';
            if(a[i][j-2]=='#' || j==0)
                break;
        }
        for(;i>=0;i--){
            a[i][j]='#';
            if(a[i-2][j]=='#' || i==0)
                break;
        }

    }
    for(i=0;i<4*n-3;i++){
        for(j=0;j<4*n-3;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4*n-3;i++){
        for(j=0;j<4*n-3;j++){
            a[i][j] = '.';
        }
    }
    }
    return 0;
}

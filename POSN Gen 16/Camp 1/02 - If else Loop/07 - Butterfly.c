/*
    TASK: Butterfly
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        for(j=0;j<=i;j++)
            printf("*");
        for(j=2*n-3;j>i*2;j--)
            printf("-");
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<2*n-1;i++)
        printf("*");
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--)
            printf("*");
        for(j=0;j<k;j++)
            printf("-");
        k+=2;
        for(j=n-1;j>i;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}

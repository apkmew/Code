#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--)
            printf("+");
        for(j=0;j<=i*2;j++)
            printf("0");
        for(j=n-1;j>i;j--)
            printf("+");
        printf("\n");
    }
    for(i=0;i<2*n-1;i++)
        printf("0");
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<=i;j++)
            printf("+");
        for(j=2*n-3;j>i*2;j--)
            printf("0");
        for(j=0;j<=i;j++)
            printf("+");
        printf("\n");
    }
    return 0;
}

/*
    TASK: Loop Practice
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
    i = n;
    while(i>0){
        printf("%d ",i);
        i--;
    }
    i = 1;
    printf("\n");
    do{
        if(i%2==0)
            printf("%d ",i);
        i++;
    }
    while(i<=n);
    printf("\n");
    for(i=n;i>0;i--)
        if(i%2==0)
            printf("%d ",i);
    i = 1;
    printf("\n");
    while(i<=n){
        if(i%2==1)
            printf("%d ",i);
        i++;
    }
    i = n;
    printf("\n");
    do{
        if(i%2==1)
            printf("%d ",i);
        i--;
    }
    while(i>0);
    printf("\n");
    return 0;
}

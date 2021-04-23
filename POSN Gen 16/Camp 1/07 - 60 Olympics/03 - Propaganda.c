/*
    TASK: Propaganda
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n==1){
        printf("No\n");
        return 0;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}

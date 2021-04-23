/*
    TASK: Prime
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <math.h>
int a[10000000];
int main()
{
    int n,i,j,k,cnt=0;
    scanf("%d",&n);
    k = sqrt(10000000);
    if(n==1){
        printf("2\n");
        return 0;
    }
    for(i=3;i<10000000;i+=2){
        a[i]=1;
    }
    for(i=3;i<k;i+=2){
        if(a[i]){
            for(j=i*i;j<10000000;j+=i){
                a[j] = 0;
            }
        }
    }
    for(i=3,j=1; 1 ;i+=2){
        if(a[i]){
            j++;
            if(n==j){
                printf("%d",i);
                return 0;
            }
        }
    }
    return 0;
}

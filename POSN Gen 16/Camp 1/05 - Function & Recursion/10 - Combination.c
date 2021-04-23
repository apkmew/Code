/*
    TASK: Combination
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <stdlib.h>
int n,r,k,a[20],b[20],cnt=0;
void permu(int state,int last){
    if(state==r){
        //cnt++;
        //if(cnt==k){
            for(int i=0;i<r;i++){
                printf("%d ",b[i]);
            }
            printf("\n");
            //exit(0);
        //}
        return ;
    }
    for(int i=last+1;i<=n;i++){
        if(!a[i]){
            a[i]=1;
            b[state]=i;
            permu(state+1,i);
            a[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d %d",&n,&r,&k);
    permu(0,0);
    return 0;
}

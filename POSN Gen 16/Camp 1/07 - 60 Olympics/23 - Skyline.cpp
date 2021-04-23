/*
    TASK: Skyline
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[300];
int main()
{
    int n,l,h,r,i,old=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&l,&h,&r);
        for(i=l;i<r;i++){
            if(h>dp[i]) dp[i]=h;
        }
    }
    for(i=1;i<=300;i++){
        if(dp[i]!=old){
            printf("%d %d ",i,dp[i]);
            old = dp[i];
        }
    }
    return 0;
}

/*
    TASK: Fluctuate
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1000100];
int main()
{
    int i,n,q,mx=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&dp[i]);
    for(i=n;i>0;i--){
        mx = max(dp[i],mx);
        if(dp[i]<=mx) dp[i]=mx-dp[i];
    }
    mx=-1;
    for(i=1;i<=n;i++)
        mx=max(dp[i],mx);
    printf("%d",mx);
    return 0;
}

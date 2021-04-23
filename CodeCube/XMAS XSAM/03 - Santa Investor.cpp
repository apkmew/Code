#include <bits/stdc++.h>
using namespace std;
int dp[1000100];
int main()
{
    int i,n,a,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&dp[i]);
    }
    if(dp[2]<dp[1]) a = dp[2];
    else a = dp[1];
    for(i=2;i<=n;i++){
        if(dp[i]<dp[i-1] && i!=2) ans += dp[i-1] - a,a = dp[i];
    }
    ans += dp[n]-a;
    printf("%d",ans);
    return 0;
}

/*
    TASK: Tigger
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int dp[1010][1010],a[1010];
int play(int u,int last){
    if(u<0 || u>n) return 1e9;
    if(u==n-1) return a[u];
    if(dp[u][last]!=-1) return dp[u][last];
    return dp[u][last] = a[u] + min(play(u-last,last),play(u+last+1,last+1));
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    memset(dp,-1,sizeof dp);
    printf("%d\n",play(1,1));
    return 0;
}

/*
    TASK: Coin Change Min
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int c,m;
int money[11],dp[1000100];
int play(int n){
    if(n<0) return 9999999;
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans = 9999999;
    for(int i=0;i<c;i++) ans = min(ans,play(n-money[i])+1);
    return dp[n] = ans;
}
int main()
{
    int i,z;
    scanf("%d %d",&c,&m);
    memset(dp,-1,sizeof dp);
    for(i=0;i<c;i++) scanf("%d",&money[i]);
    z = play(m);
    printf("%d\n",z==9999999?0:z);
    return 0;
}

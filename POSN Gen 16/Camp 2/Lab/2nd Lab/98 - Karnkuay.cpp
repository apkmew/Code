/*
    TASK: Karnkuay
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%d %d",&i,&i);
    for(i=3;i<=n;i++){
        scanf("%d",&dp[i]);
        dp[i] = max(dp[i-1],dp[i-3]+dp[i]);
    }
    printf("%d",dp[n]);
    return 0;
}

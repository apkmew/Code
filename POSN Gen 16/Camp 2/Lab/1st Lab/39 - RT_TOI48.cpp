/*
    TASK: RT_TOI48
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int w[15100],p[5100],dp[15100][15100];
int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
        w[i] += 1;
        w[i] *= 8;
    }
    for(i=1;i<=n;i++){
        for(j=0;j<w[i];j++) dp[i][j] = dp[i-1][j];
        for(j=w[i];j<=m;j++) dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
    }
    printf("%d\n",dp[n][m]);
    return 0;
}

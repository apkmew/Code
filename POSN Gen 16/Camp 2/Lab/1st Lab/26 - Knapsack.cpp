/*
    TASK: Knapsack
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int w[110],p[110],dp[110][11000];
int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d %d",&p[i],&w[i]);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<w[i];j++) dp[i][j] = dp[i-1][j];
        for(j=w[i];j<=m;j++){
            dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
        }
    }
    printf("%d\n",dp[n][m]);
    return 0;
}

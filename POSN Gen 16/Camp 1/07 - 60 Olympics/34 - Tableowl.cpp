/*
    TASK: Tableowl
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[510][510];
int main()
{
    int i,j,n,m,mi=1<<30;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&dp[i][j]);
        }
    }
    dp[n][0]=dp[n][1];
    dp[n][m+1] = dp[n][m];
    for(i=n-1;i>=1;i--){
        dp[i][0]=dp[i][1];
        dp[i][m+1] = dp[i][m];
        for(j=1;j<=m;j++){
            if(j>1 && j<m) dp[i][j] += min(dp[i+1][j-1],min(dp[i+1][j],dp[i+1][j+1]));
            if(j==1) dp[i][j] += min(dp[i+1][j],dp[i+1][j+1]);
            if(j==m) dp[i][j] += min(dp[i+1][j-1],dp[i+1][j]);
        }
    }
    for(i=1;i<=m;i++){
        mi = min(dp[1][i],mi);
    }
//    for(i=1;i<=n;i++){
//        for(j=1;j<=m;j++){
//            printf("%d ",dp[i][j]);
//        }¼
//        printf("\n");
//    }
    printf("%d",mi);
    return 0;
}
/*
5 6
3 6 1 7 2 3
4 7 9 5 2 1
3 3 3 9 9 8
7 5 7 5 8 9
2 4 1 3 7 1
*/

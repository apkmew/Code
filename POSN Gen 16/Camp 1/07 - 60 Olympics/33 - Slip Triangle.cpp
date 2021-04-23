/*
    TASK: Slip Triangle
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            scanf("%d",&dp[i][j]);
        }
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=i;j++){
            dp[i][j]+=max(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    printf("%d",dp[1][1]);
    return 0;
}
/*
5
7
3 8
8 1 0
2 7 4 4
4 5 2 5 6
*/

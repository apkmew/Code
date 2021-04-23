/*
    TASK:
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main()
{
    int n,r,c,i,j;
    scanf("%d %d %d",&r,&c,&n);
    while(n--){
        scanf("%d %d",&i,&j);
        dp[i+1][j+1] = -1;
    }
    dp[1][0] = 1;
    for(i=1;i<=r+1;i++){
        for(j=1;j<=c+1;j++){
            if(dp[i][j]==-1)
                dp[i][j]=0;
            else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                dp[i][j] %= 1000000;
            }
        }
    }
    printf("%d\n",dp[r+1][c+1]);
    return 0;
}
/*
3 2 2 3 1 3 0
*/

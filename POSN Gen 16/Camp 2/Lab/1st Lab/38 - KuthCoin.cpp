/*
    TASK:
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[10][100100];
int main()
{
    int n,k,i,j,mod=1000003,a;
    dp[1][0] = 1;
    dp[2][0] = 1;
    dp[3][0] = 1;
    dp[4][0] = 1;
    dp[5][0] = 1;
    for(i=1;i<=5;i++){
        if(i==1) a = 1;
        else if(i==2) a = 5;
        else if(i==3) a = 10;
        else if(i==4) a = 25;
        else if(i==5) a = 50;
        for(j=1;j<=100000;j++){
            if(j-a>=0)dp[i][j] = dp[i-1][j] + dp[i][j-a];
            else dp[i][j] = dp[i-1][j];
            dp[i][j] %= mod;
        }
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        printf("%d\n",dp[5][k]);
    }
    return 0;
}

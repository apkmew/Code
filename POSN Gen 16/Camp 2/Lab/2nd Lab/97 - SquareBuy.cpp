/*
    TASK: Square Buy
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main()
{
    int q,z,m,i,j,x;
    for(i=1;i<=100000;i++){
        dp[i] = 2e9;
        for(j=1;j<=320;j++){
            x = j*j;
            if(x>i) break;
            dp[i] = min(dp[i-x]+1,dp[i]);
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&z,&m);
        printf("%d\n",dp[z]%m);
    }
    return 0;
}

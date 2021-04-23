/*
    TASK: LIS
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include<bits/stdc++.h>
using namespace std;

int x[1010];
int dp[1010];
int prew[1010];
int ans[1010];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    x[0] = -500;
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(x[i] > x[j] && dp[j]+1>dp[i]){
                dp[i] = dp[i]+1;
                prew[i] =j;
            }
        }
    }
    int mx=-1; int st = -1; int cnt = 0;
    for(int i=1;i<=n;i++)
        if(mx < dp[i]){
            mx = dp[i];
            st = i;
        }
    while(st > 0){
        ans[cnt++] = x[st];
        st = prew[st];
    }
    printf("%d\n",cnt);
    for(int i=cnt-1;i>=0;i--){
        printf("%d ",ans[i]);
    }
    return 0;
}

/*
    TASK: Equipped
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[260];
int main()
{
    int n,k,all,v,i,j,sum=0;
    scanf("%d %d",&n,&k);
    all = 1<<k;
    for(i=1;i<all;i++) dp[i] = 2e9;
    while(n--){
        scanf("%d",&v);
        for(i=0,sum=0;i<k;i++){
            scanf("%d",&j);
            if(j) sum += (1<<i);
        }
        for(i=0;i<all;i++) dp[i|sum] = min(dp[i|sum],dp[i]+v);
    }
    printf("%d\n",dp[all-1]);
    return 0;
}
/*
5 3
10 1 0 1
30 0 1 1
5 1 0 0
4 0 0 1
150 1 1 1
*/

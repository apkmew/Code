/*
    TASK: FC_Explore
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[500500],hin[500500];
vector<int> warp[500500];
int main()
{
    int n,m,k,a,b,c,i;
    scanf("%d %d %d",&n,&m,&k);
    while(m--){
        scanf("%d %d",&a,&b);
        warp[a].push_back(b);
    }
    while(k--){
        scanf("%d",&c);
        hin[c] = 1;
    }
    dp[1] = 1;
    for(i=1;i<=n;i++){
        if(dp[i]==0) continue;
        if(hin[i]==0) dp[i+1] = 1;
        for(auto x: warp[i])
            dp[x] = 1;
    }
    if(dp[n]==1) printf("1\n");
    else{
        for(i=n;i>=1;i--){
            if(dp[i]==1){
                printf("0 %d\n",i);
                return 0;
            }
        }
    }
    return 0;
}
/*
5 1 1
2 5
2
5 1 1
1 2
2
*/

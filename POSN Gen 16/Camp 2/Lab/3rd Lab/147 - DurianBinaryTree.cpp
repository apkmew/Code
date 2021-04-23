/*
    TASK: Durian Binary Tree
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
};
vector<A> g[110];
int weight[110],dp[5010][110],l[110],r[110];
void dfs(int now,int p){
    for(auto x: g[now]){
        if(x.v == p) continue;
        if(l[now] == 0) l[now] = x.v;
        else r[now] = x.v;
        weight[x.v] = x.w;
        dfs(x.v,now);
    }
}
int dv(int now,int k){
    if(dp[now][k]!=-1) return dp[now][k];
    if(k==0) return 0;
    int mx = -1;
    for(int i=0;i<k;i++) mx = max(mx,dv(l[now],i)+dv(r[now],k-i-1));
    return dp[now][k] = mx + weight[now];
}
int main()
{
    int n,k,u,v,w;
    scanf("%d %d",&n,&k);
    for(int i=1;i<n;i++){
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dfs(1,0);
    memset(dp,-1,sizeof dp);
    int mx = -1;
    printf("%d\n",dv(1,k+1));
    return 0;
}
/*
5 2
1 3 1
1 4 10
2 3 20
5 3 20
*/

/*
    TASK: Tower
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v;
    bool operator<(const A& o)const{
        return u<o.u;
    }
};
A c[100100];
int dp[10100];
int main()
{
    int a,b,n,m,k,i;
    scanf("%d %d %d",&k,&n,&m);
    for(i=2;i<=n;i++) dp[i] = 2e9;
    //dp[1] = 0;
    for(i=0;i<m;i++) scanf("%d %d",&c[i].u,&c[i].v);
    sort(c,c+m);
    for(i=0;i<m;i++){
        a = c[i].u, b = c[i].v;
        dp[b] = min(dp[b],dp[a]+1);
    }
    for(i=n;i>=1;i--){
        //printf("%d ",dp[i]);
        if(dp[i]<=k){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
/*
2 6 5
1 2
1 3
2 5
3 4
5 6
*/

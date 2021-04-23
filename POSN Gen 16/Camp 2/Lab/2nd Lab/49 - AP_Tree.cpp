/*
    TASK: AP_Tree
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> node[100100];
long long sum=0,ans=1e18,v[100100];
long long f(int x,int p){
    long long s = v[x],t;
    for(int i=0;i<node[x].size();i++){
        if(node[x][i]==p) continue;
        t = f(node[x][i],x);
        ans = min(abs(sum-t*2),ans);
        s += t;
    }
    return s;
}
int main()
{
    int q,n,a,b,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<n;i++){
            scanf("%d %d",&a,&b);
            node[a].push_back(b);
            node[b].push_back(a);
        }
        for(i=1;i<=n;i++){
            scanf("%lld",&v[i]);
            sum += v[i];
        }
        f(1,0);
        printf("%lld\n",ans);
        for(i=1;i<=n;i++) node[i].clear();
        sum = 0;
        ans = 1e18;
    }
    return 0;
}
/*
2
6
1 2
1 3
1 5
5 6
6 4
2 1 3 3 4 6
3
1 2
1 3
10 4 3
*/

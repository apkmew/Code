/*
    TASK: File Transfer DFS
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[1010];
int mark[1010];
void dfs(int u){
    mark[u] = 1;
    for(auto x:g[u])
        if(!mark[x])
            dfs(x);
}
int main()
{
    int n,m,q,i,u,v;
    scanf("%d %d %d",&n,&m,&q);
    while(m--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }
    while(q--){
        scanf("%d %d",&u,&v);
        memset(mark,0,sizeof mark);
        mark[u] = 1;
        dfs(u);
        printf((mark[v]==1)?"Yes\n":"No\n");
    }
    return 0;
}
/*
5 5 3 1 2 2 3 1 4 4 5 3 4 3 5 1 3 3 1
*/

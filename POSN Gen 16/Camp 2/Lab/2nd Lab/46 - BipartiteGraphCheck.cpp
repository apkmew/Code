/*
    TASK:
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int colo[100100],mark[100100];
int play(int u,int now){
    if(mark[u] && colo[u]==now) return 1;
    if(mark[u] && colo[u]!=now) return 0;
    mark[u] = 1, colo[u] = now;
    for(auto x: g[u]){
        if(play(x,3-now)==0)
            return 0;
    }
    return 1;
}
int main()
{
    int q,n,m,u,v,ch=1,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(i=1,ch=1;i<=n;i++){
            if(mark[i]==0){
                if(play(i,1)==0){
                    ch = 0; break;
                }
            }
        }
        printf((ch)?"yes\n":"no\n");
        memset(mark,0,sizeof mark);
        memset(colo,0,sizeof colo);
        for(i=1;i<=n;i++){
            g[i].clear();
        }
    }
    return 0;
}

/*
    TASK: Turbo Programming
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
vector<pair<int,int> > pa[1010];
int dis[1010];
int main()
{
    int i,n,m,q,s,e,v,w;
    scanf("%d %d %d",&n,&m,&q);
    while(m--){
        scanf("%d %d %d",&s,&e,&w);
        pa[s].push_back({e,w});
        //pa[e].push_back({s,w});
    }
    memset(dis,-1,sizeof dis);
    h.push({1,0});
    while(!h.empty()){
        v = h.top().v;
        w = h.top().w;
        h.pop();
        if(dis[v]!=-1) continue;
        dis[v] = w;
        for(auto x: pa[v]) h.push({x.first,w+x.second});
    }
    while(q--){
        scanf("%d",&i);
        printf("%d\n",dis[i]);
    }
    return 0;
}
/*
6 5 3
1 2 10
2 3 10
3 4 10
4 5 10
1 5 50
6
5
4
*/

/*
    TASK: Q_Airway
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
vector<pair<int,int> > g[1010];
int dis[1010];
int main()
{
    int n,m,xx,y,aa,bb,tt,k,a,b,t,v,w,ch=0;
    scanf("%d %d",&n,&m);
    scanf("%d %d",&xx,&y);
    scanf("%d %d %d %d",&aa,&bb,&tt,&k);
    g[aa].push_back({bb,tt});
    while(m--){
        scanf("%d %d %d",&a,&b,&t);
        g[a].push_back({b,t});
        //g[b].push_back({a,t});
    }
    for(int i=0;i<n;i++) dis[i]=1e9;
    h.push({xx,0});
    dis[xx] = 0;
    while(!h.empty()){
        v = h.top().v;
        w = h.top().w;
        h.pop();
        if(v == y){
            printf("%d\n",w);
            break;
        }
        for(auto x:g[v]){
            if(x.second<0){
                if(w<=k && w+x.second<dis[x.first]){
                    dis[x.first] = w+x.second;
                    h.push({x.first,w+x.second});
                }
            }else{
                if(w+x.second<dis[x.first]){
                    dis[x.first] = w+x.second;
                    h.push({x.first,w+x.second});
                }
            }
        }
    }
    return 0;
}
/*
4 4
0 3
1 3 -10 10
0 1 5
0 3 10
1 3 3
2 3 5
*/

/*
    Task	: 06_fin_toofast
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 09 January 2023 [23:58]
    Algo	: Dijkstra
    Status	: Debuging
*/
#include<bits/stdc++.h>
using namespace std;
int dis[1010][5];
struct A{
    int v,w,s;
    bool operator<(const A&o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
vector<A> g[1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    //freopen("06_fin_toofast.in","r",stdin);
    //freopen("06_fin_toofast.out","w",stdout);
    int i,n,m,u,v,w,s;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v >> w >> s;
        g[u].push_back({v,w,s});
        g[v].push_back({u,w,s});
    }
    memset(dis,-1,sizeof dis);
    h.push({1,0,0});
    while(!h.empty()){
        v = h.top().v;
        w = h.top().w;
        s = h.top().s;
        h.pop();
        if(dis[v][s]!=-1) continue;
        dis[v][s] = w;
        if(v==n){
            cout << w << "\n";
            return 0;
        }
        for(auto x:g[v]){
            if(x.s==1 && s==1) continue;
            if(dis[x.v][x.s+s]!=-1) continue;
            h.push({x.v,w+x.w,x.s+s});
        }
    }
    cout << "-1\n";
    return 0;
}
/*
5 6
1 2 10 0
2 3 10 0
1 3 5 1
3 4 10 0
4 5 10 0
3 5 4 1
5 4
1 2 10 0
2 3 10 1
3 4 10 0
4 5 10 1
*/
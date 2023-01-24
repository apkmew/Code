/*
    Task	: 03_shortestpath
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 24 January 2023 [16:16]
    Algo	: Dijkstra
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator<(const A&o) const{
        return w>o.w;
    }
};
priority_queue<A> h;
vector<A> g[100100];
int dis[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,u,v,w,i;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    h.push({1,0});
    while(!h.empty()){
        u = h.top().v;
        w = h.top().w;
        h.pop();
        if(u==n){
            cout << w << "\n";
            return 0;
        }
        if(dis[u]!=0)   continue;
        dis[u] = w;
        for(auto x:g[u]){
            if(dis[x.v]!=0) continue;
            h.push({x.v,w+x.w});
        }
    }
    return 0;
}
/*
4 5
1 2 10
1 3 20
3 4 5
4 2 7
2 3 12
*/
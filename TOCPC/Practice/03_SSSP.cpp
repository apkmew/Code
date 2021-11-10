/*
    Task	: 03_SSSP
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 10 November 2021 [23:40]
    Algo	: Dijkstra
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    long long v,w;
    bool operator<(const A& o)const{
        return w > o.w;
    }
};
priority_queue<A> h;
long long dis[100100];
vector<pair<long long,long long> > g[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,m,u,v,w,i;
    cin >> n >> m;
    while(m--){
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dis,-1,sizeof dis);
    h.push({1,0});
    while (!h.empty()){
        v = h.top().v;
        w = h.top().w;
        h.pop();
        if(dis[v] != -1) continue;
        dis[v] = w;
        for(auto x: g[v]) h.push({x.first,w+x.second});
    }
    for(i=1;i<=n;i++) cout << dis[i] << ' ';
    return 0;
}
/*
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/
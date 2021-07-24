/*
    Task	: 100_PN_Lucky
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 14 May 2021 [02:10]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w,l;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
vector<pair<int,int> > g[50100];
int dis[50100][35],luck[50100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int u,v,w,q,n,m,l,i,s,t,ll,lll;
    cin >> q;
    while(q--){
        memset(dis,-1,sizeof dis);
        cin >> n >> m >> l;
        cin >> s >> t;
        for(i=1;i<=n;i++){
            cin >> luck[i];
        }
        for(i=1;i<=m;i++){
            cin >> u >> v >> w;
            g[u].push_back({v,w});
        }
        dis[s][0] = 0;
        h.push({s,0,0});
        while(!h.empty()){
            v = h.top().v; w = h.top().w; ll = h.top().l;
            h.pop();
            if(v==t && ll==l){
                cout << dis[v][l] << "\n";
                break;
            }
            for(auto x: g[v]){
                lll = ll;
                if(luck[x.first]==ll+1) lll++;
                if(dis[x.first][lll]!=-1) continue;
                dis[x.first][lll] = w+x.second;
                h.push({x.first,w+x.second,lll});
            }
        }
        while(!h.empty()) h.pop();
    }
    return 0;
}
/*
1
6 8 3
1 6
0 2 1 1 4 3
1 2 20
1 3 80
3 2 100
2 4 30
4 2 40
2 6 25
2 5 15
5 6 50
*/
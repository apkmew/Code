/*
    Task	: 05_fin59_hos2
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 24 January 2023 [23:09]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[1010];
int mark[1010][1010],safe[1010];
struct A{
    int u,v,dis;
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,h,u,v,i,dis,mx=-1;
    cin >> n >> m >> h;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(i=1;i<=n;i++){
        bfs.push({i,i,0});
    }
    while(!bfs.empty()){
        u = bfs.front().u;
        v = bfs.front().v;
        dis = bfs.front().dis;
        bfs.pop();
        if(mark[u][v]) continue;
        mark[u][v] = 1;
        safe[u]++;
        if(dis == h) continue;
        for(auto x:g[v]){
            if(mark[u][x])  continue;
            bfs.push({u,x,dis+1});
        }
    }
    for(i=1;i<=n;i++){
        mx = max(mx,safe[i]);
    }
    cout << mx << "\n";
    return 0;
}
/*
7 7 1
1 2
7 1
1 3
3 4
4 5
6 5
3 6
*/
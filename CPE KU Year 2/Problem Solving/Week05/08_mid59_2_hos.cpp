/*
    Task	: 08_mid59_2_hos
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 25 January 2023 [22:37]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int> g[100100];
int mark[100100][5];
struct A{
    int v,dis,t;
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,k,h,i,j,u,v,dis,t,ans=0;
    cin >> n >> m >> k >> h;
    for(i=0;i<k;i++){
        cin >> u;
        q.push(u);
    }
    for(i=0;i<k;i++){
        cin >> u;
        v = q.front();
        q.pop();
        if(u==0) u = 2;
        bfs.push({v,0,u});
    }
    h = h*2;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    while(!bfs.empty()){
        u = bfs.front().v;
        dis = bfs.front().dis;
        t = bfs.front().t;
        bfs.pop();
        if(mark[u][t]) continue;
        if(!mark[u][1] && !mark[u][2]) ans++;
        mark[u][t] = 1;
        if(dis==h) continue;
        for(auto x:g[u]){
            //if(mark[x]) continue;
            bfs.push({x,dis+t,t});
        }
    }
    cout << ans << "\n";
    return 0;
}
/*
7 7 2 1
4 2
0 1
1 2
7 1
1 3
3 4
4 5
6 5
3 6
*/
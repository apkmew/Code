/*
    Task	: 11_mid64_redblackbridges
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 23 January 2023 [14:36]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,c;    // c = 0 : nocolor, c = 1 : red, 2 : black
};
vector<A> g[50100];
struct B{
    int v,c,dis;
};
queue<B> bfs;
int mark[50100][5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,m,s,t,u,v,c;
    cin >> n >> m >> s >> t;
    for(i=0;i<m;i++){
        cin >> u >> v >> c;
        g[u].push_back({v,c});
        g[v].push_back({u,c});
    }
    bfs.push({s,1,0});
    bfs.push({s,2,0});
    while(!bfs.empty()){
        auto now = bfs.front();
        bfs.pop();
        //cout << now.v << " " << now.c << " " << now.dis << "\n";
        if(mark[now.v][now.c]==1) continue;
        mark[now.v][now.c] = 1;
        if(now.v==t){
            cout << now.dis << "\n";
            return 0;
        }
        for(auto x:g[now.v]){
            if(now.c==1){
                if(x.c==2){
                    continue;
                }
                bfs.push({x.v,1,now.dis+1});
            }
            else if(now.c==2){
                if(x.c==1){
                    continue;
                }
                bfs.push({x.v,2,now.dis+1});
            }
        }
    }
    cout << "-1\n";
    return 0;
}
/*
6 7 2 4
2 5 0
3 4 2
6 5 0
3 6 0
1 4 1
2 1 2
1 3 0
*/
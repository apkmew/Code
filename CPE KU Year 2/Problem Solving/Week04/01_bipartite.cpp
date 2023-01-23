/*
    Task	: 01_bipartite
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 09 January 2023 [13:06]
    Algo	: Graph
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int mark[100100];
queue<int> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,k,n,m,u,v;
    cin >> k;
    while(k--){
        cin >> n >> m;
        for(i=0;i<m;i++){
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bfs.push(1);
        mark[1] = 1;
        while(!bfs.empty()){
            u = bfs.front();
            bfs.pop();
            for(auto x:g[u]){
                if(mark[x] == 0){
                    mark[x] = 3-mark[u];
                    bfs.push(x);
                }
                else if(mark[x] == mark[u]){
                    cout << "no\n";
                    goto next;
                }
            }
        }
        cout << "yes\n";
        next:;
        while(!bfs.empty()) bfs.pop();
        for(i=1;i<=n;i++){
            g[i].clear();
            mark[i] = 0;
        }
    }
    return 0;
}
/*
2
3 3
1 2
2 3
3 1
4 3
1 2
1 3
4 1
*/
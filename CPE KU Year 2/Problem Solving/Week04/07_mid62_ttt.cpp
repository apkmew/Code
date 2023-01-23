/*
    Task	: 07_mid62_ttt
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 10 January 2023 [09:26]
    Algo	: Bipartite Graph
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int mark[1010];
vector<int> g[1010];
pair<int,int> edge[3010];
queue<int> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,m,u,v,k;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        edge[i] = {u,v};
    }
    for(k=0;k<m;k++){
        for(i=1;i<=n;i++){
            if(mark[i]) continue;
            mark[i] = 1;
            bfs.push(i);
            while(!bfs.empty()){
                u = bfs.front();
                bfs.pop();
                for(auto x:g[u]){
                    if(x==edge[k].first && u==edge[k].second) continue;
                    if(x==edge[k].second && u==edge[k].first) continue;
                    if(mark[x]==mark[u]) goto next;
                    if(mark[x]) continue;
                    mark[x] = 3-mark[u];
                    bfs.push(x);
                }
            }
        }
        cout << edge[k].first << " " << edge[k].second << "\n";
        break;
        next:;
        //cout << " " << edge[k].first << " " << edge[k].second << "\n";
        //for(i=1;i<=n;i++){
        //    cout << "\t" << i << " " << mark[i] << "\n";
        //}
        while(!bfs.empty()) bfs.pop();
        memset(mark,0,sizeof mark);
    }
    return 0;
}
/*
5 5
2 3
1 2
3 1
1 4
2 4
*/
/*
    Task	: 03_orderingtask
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 09 January 2023 [14:56]
    Algo	: Topological Sort
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[110];
stack<int> ans;
int mark[110];
void dfs(int u){
    if(mark[u]) return;
    mark[u] = 1;
    for(auto x:g[u]){
        dfs(x);
    }
    ans.push(u);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,u,v,i;
    while(1){
        cin >> n >> m;
        if(n==0 && m==0) break;
        for(i=0;i<m;i++){
            cin >> u >> v;
            g[u].push_back(v);
        }
        for(i=1;i<=n;i++){
            if(mark[i]) continue;
            dfs(i);
        }
        while(!ans.empty()){
            cout << ans.top() << " ";
            ans.pop();
        }
        cout << "\n";
        for(i=1;i<=n;i++){
            g[i].clear();
            mark[i] = 0;
        }
    }
    return 0;
}
/*
5 4
1 2
2 3
1 3
1 5
0 0
*/
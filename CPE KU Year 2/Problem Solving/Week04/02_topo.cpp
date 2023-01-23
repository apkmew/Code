/*
    Task	: 02_topo
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 09 January 2023 [13:27]
    Algo	: Graph
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100],ans2;
stack<int> ans;
int mark[100100],in[100100];
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
    int n,m,u,v,i,now;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v;
        in[v]++;
        g[u].push_back(v);
    }
    for(i=1;i<=n;i++){
        if(mark[i]) continue;
        dfs(i);
    }

    while(!ans.empty()){
        now = ans.top();
        ans.pop();
        ans2.push_back(now);
        if(in[now]){
            cout << "no\n";
            return 0;
        }
        for(auto x:g[now]){
            in[x]--;
        }
    }
    for(auto x:ans2) cout << x << "\n";
    return 0;
}
/*
4 4
1 2
1 4
3 4
2 4
*/
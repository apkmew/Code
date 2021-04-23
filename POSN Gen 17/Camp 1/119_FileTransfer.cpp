/*
    TASK : File Transfer
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> g[1010];
int mark[1010];
void dfs(int u){
    if(mark[u]) return ;
    mark[u] = 1;
    for(auto x: g[u]) dfs(x);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int u,v,n,m,q,ch;
    cin >> n >> m >> q;
    while (m--)
    {
        cin >> u >> v;
        g[u].push_back(v);
    }
    while (q--)
    {
        ch = 0;
        cin >> u >> v;
        dfs(u);
        if(mark[v]) cout << "Yes\n";
        else cout << "No\n";
        memset(mark,0,sizeof mark);
    }
    return 0;
}
/*
5 5 3
1 2
2 3
1 4
4 5
3 4
3 5
1 3
3 1
*/
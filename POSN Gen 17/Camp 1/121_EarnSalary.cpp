/*
    TASK : Earn Salary
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int ans[100100],a;
void dfs(int u){
    for(auto x: g[u]){
        ans[x] += ans[u];
        dfs(x);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,u,v,n,m;
    cin >> n >> m;
    for(i=0;i<n-1;i++){
        cin >> v >> u;
        g[u].push_back(v);
    }
    while(m--){
        cin >> u >> a;
        ans[u] += a;
    }
    dfs(1);
    for(i=1;i<=n;i++) cout << ans[i] << "\n";
    return 0;
}
/*
10 10
5 1
4 2
2 6
8 7
9 3
3 2
6 5
7 6
10 1
9 9
1 1
9 6
1 2
9 8
1 2
4 7
2 9
6 7
2 4
*/
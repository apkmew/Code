/*
    TASK : J'Ra 2nd Shop
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> g[10],ans;
int a[10],b[10];
void dfs(int u,int st){
    if(u==2 && a[2]){
        int num=0,i;
        for(i=0;i<st;i++){
            num *= 10; num += b[i];
        }
        ans.push_back(num);
        return ;
    }
    if(a[u]) return ;
    a[u] = 1;
    b[st] = u;
    for(auto x: g[u]){
        dfs(x,st+1);
    }
    a[u] = 0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,u,v;
    cin >> n;
    while(n--){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(2,0);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << "2" << "\n";
    }
    return 0;
}
/*
6
1 2
1 3
1 4
2 3
3 4
3 5
*/
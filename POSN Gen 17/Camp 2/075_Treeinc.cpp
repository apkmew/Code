/*
    Task	: 075_Treeinc
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 11 May 2021 [16:23]
    Algo	: Graph
    Status	: Debug
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[300100];
int dis[300100];
void dfs(int u,int st){
    for(auto x: g[u]){
        if(dis[x]>=st+1) continue;
        dis[x] = st+1;
        dfs(x,st+1);
    }
    return ;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,u,v;
    cin >> n;
    for(i=1;i<n;i++){
        cin >> u >> v;
        if(v<u) swap(u,v);
        g[u].push_back(v);
        dis[i] = 1;
    }
    dis[n] = 1;
    for(i=1;i<n;i++){
        dfs(i,1);
    }
    int mx = -1;
    for(i=1;i<=n;i++){
        mx = max(mx,dis[i]);
    }
    cout << mx;
    return 0;
}
/*
9
1 2
2 9
1 7
6 8
2 6
3 9
4 9
5 4
*/
/*
    Task	: 02_conncount
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [13:27]
    Algo	: Graph - DFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int mark[100100];
void play(int u){
    int i;
    if(mark[u]) return;
    mark[u] = 1;
    for(auto x:g[u]){
        play(x);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,i,u,v,cou=0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(i=1;i<=n;i++){
        if(!mark[i]){
            cou++;
            play(i);
        }
    }
    cout << cou << "\n";
    return 0;
}
/*
3 2
1 2
3 1

5 4
1 2
2 5
1 5
4 3
*/
/*
    Task	: 13_twoteams
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 23 January 2023 [15:17]
    Algo	: Bipartite
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int mark[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,u,v,i;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        if(mark[u]==0 && mark[v]==0){
            mark[u] = 1;
            mark[v] = 2;
        }
        else if(mark[u]==0){
            mark[u] = 3-mark[v];
        }
        else if(mark[v]==0){
            mark[v] = 3-mark[u];
        }
        else{
            g[v].pop_back();
            
        }
    }
    return 0;
}
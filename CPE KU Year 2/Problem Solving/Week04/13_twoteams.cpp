/*
    Task	: 13_twoteams
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 23 January 2023 [15:17]
    Algo	: Bipartite
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int mark[100100],ch[100100],cou=0;
void dfs(int i){
    ch[i] = cou;
    mark[i] = 3 - mark[i];
    for(auto x:g[i]){
        if(ch[x]!=cou){
            dfs(x);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,u,v,i;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v;
        //g[u].push_back(v);
        //g[v].push_back(u);
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
            if(mark[u]==mark[v]){
                cou++;
                dfs(v);
                if(mark[u]==mark[v]){
                    cout << i << "\n";
                    return 0;
                }
            }
        }
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << i << "\n";
    return 0;
}
/*
5 7
1 2
2 3
3 4
4 1
4 5
5 2
5 1
*/
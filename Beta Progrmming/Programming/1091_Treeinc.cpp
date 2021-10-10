/*
    Task	: 1091_Treeinc
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 10 October 2021 [21:04]
    Algo	: Graph Travelsal
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[300100];
int mx[300100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,u,v,mxx=-1;
    cin >> n;
    for(i=0;i<n-1;i++){
        cin >> u >> v;
        if(v < u) swap(u,v);
        g[u].push_back(v);
    }
    for(i=1;i<=n;i++){
        for(auto x: g[i]){
            mx[x] = max(mx[x],mx[i]+1);
            mxx = max(mxx,mx[x]);
        }
    }
    cout << mxx + 1;
    return 0;
}
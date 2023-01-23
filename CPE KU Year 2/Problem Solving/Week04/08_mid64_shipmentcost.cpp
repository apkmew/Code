/*
    Task	: 08_mid64_shipmentcost
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 10 January 2023 [10:00]
    Algo	: Unweighted Shortest Path
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
pair<int,int> p[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,s,t,u,v,i;
    cin >> n >> m >> s >> t;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    return 0;
}
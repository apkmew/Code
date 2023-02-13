/*
    Task	: 02_mst
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 13 February 2023 [13:26]
    Algo	: MST
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i){  // find root
    if(p[i]==i) return i;
    else        return p[i]=fr(p[i]);
}
struct A{
    int u,v,w;
    bool operator<(const A&o) const{
        return w<o.w;
    }
};
A g[200100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,u,v,w,i,ans=0;
    cin >> n >> m;
    for(i=0;i<m;i++){
        cin >> u >> v >> w;
        g[i].u = u;
        g[i].v = v;
        g[i].w = w;
    }
    for(i=0;i<n;i++) p[i] = i;
    sort(g,g+m);
    for(i=0;i<m;i++){
        if(fr(g[i].u)!=fr(g[i].v)){
            p[fr(g[i].u)] = fr(g[i].v); // union
            ans += g[i].w;
        }
    }
    cout << ans << "\n";
    return 0;
}
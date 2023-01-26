/*
    Task	: 08_mid64_shipmentcost
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 10 January 2023 [10:00]
    Algo	: Unweighted Shortest Path
    Status	: Debugging
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100],fact;
queue<int> st,fc;
int mark[100100],storage[100100],factory[100100],ans[100100],mark2[100100][5];
struct A{
    int u,v,dis;
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,s,t,u,v,i,dis;
    cin >> n >> m >> s >> t;
    for(i=0;i<m;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(i=0;i<s;i++){
        cin >> u;
        storage[u] = 1;
        st.push(u);
    }
    for(i=0;i<t;i++){
        cin >> u;
        factory[u] = 1;
        fc.push(u);
        fact.push_back(u);
    }
    if(s <= t){
        for(i=0;i<s;i++){
            u = st.front();
            st.pop();
            bfs.push({u,u,0});
        }
        while(!bfs.empty()){
            u = bfs.front().u;
            v = bfs.front().v;
            dis = bfs.front().dis;
            bfs.pop();
            if(mark[v]) continue;
            mark[v] = 1;
            if(factory[v]){
                for(i=0;i<fact.size();i++){
                    if(fact[i]==v){
                        ans[i] = dis;
                        break;
                    } 
                }
            } 
            for(auto x:g[v]){
                if(mark[x]) continue;
                bfs.push({u,x,dis+1});
            }
        }
    }
    else{
        for(i=0;i<t;i++){
            u = fc.front();
            fc.pop();
            bfs.push({u,u,0});
        }
        while(!bfs.empty()){
            u = bfs.front().u;
            v = bfs.front().v;
            dis = bfs.front().dis;
            bfs.pop();
            if(mark2[v][u]) continue;
            mark2[v][u] = 1;
            if(storage[v]){
                for(i=0;i<fact.size();i++){
                    if(fact[i]==u && !ans[i]){
                        ans[i] = dis;
                        break;
                    } 
                }
            }
            for(auto x:g[v]){
                if(mark2[x][u]) continue;
                bfs.push({u,x,dis+1});
            }
        }
    }
    for(i=0;i<t;i++) cout << ans[i] << "\n";
    return 0;
}
/*
8 9 3 5
1 3
2 3
3 4
4 5
2 5
4 6
5 6
7 5
8 7
1 2 8
1 6 5 4 7
*/
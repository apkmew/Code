/*
    TASK : superbridge
    LANG : CPP
    AUTHOR : Apimook T.
*/
#include <bits/stdc++.h>
using namespace std;
int p[100100],c[200100][5];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
struct A{
    int n,u,v,w;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
struct X{
    int n,u,v,w;
    bool operator<(const X& o)const{
        return w<o.w;
    }
};
struct Y{
    int n,w;
    bool operator<(const Y& o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
priority_queue<X> hh;
vector<Y> b[100100];
vector<pair<int,int> > g[100100],ansk;
vector<int> ansn;
int main(){
    int n,m,k,u,v,w,i,cnt=1,answ=0;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=n;i++) p[i]=i;
    while(m--){
        scanf("%d %d %d",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
        h.push({cnt++,u,v,w});
    }
    for(i=1;i<=k;i++){
        scanf("%d %d",&u,&w);
        b[u].push_back({i,w});
    }
    for(i=1;i<=n;i++){
        sort(b[i].begin(),b[i].end());
    }
    while(!h.empty()){
        n = h.top().n;
        u = h.top().u;
        v = h.top().v;
        w = h.top().w;
        h.pop();
        if(fr(p[u])==fr(p[v])) continue;
        p[fr(p[u])] = fr(p[v]);
        p[fr(p[v])] = fr(p[u]);
        hh.push({n,u,v,w});
    }
    while(!hh.empty()){
        n = hh.top().n;
        u = hh.top().u;
        v = hh.top().v;
        w = hh.top().w;
        hh.pop();
        if(b[u].empty() && b[v].empty()){
            ansn.push_back(n);
            answ += w;
        }
        else if(!b[u].empty() && b[v].empty()){
            if(w<b[u].back().w){
                ansn.push_back(n);
                answ += w;
            }
            else{
                ansk.push_back({b[u].back().n,v});
                answ += b[u].back().w;
                b[u].pop_back();
            }
        }
        else if(!b[v].empty() && b[u].empty()){
            if(w<b[v].back().w){
                ansn.push_back(n);
                answ += w;
            }
            else{
                ansk.push_back({b[v].back().n,u});
                answ += b[v].back().w;
                b[v].pop_back();
            }
        }
        else{
            if(w<b[u].back().w && w<b[v].back().w){
                ansn.push_back(n);
                answ += w;
            }
            else{
                if(b[u].back().w < b[v].back().w){
                    ansk.push_back({b[u].back().n,v});
                    answ += b[u].back().w;
                    b[u].pop_back();
                }
                else if(b[u].back().w >= b[v].back().w){
                    ansk.push_back({b[v].back().n,u});
                    answ += b[v].back().w;
                    b[v].pop_back();
                }
            }
        }
    }
    printf("%d\n",answ);
    printf("%d\n",ansn.size());
    for(i=0;i<ansn.size();i++) printf("%d\n",ansn[i]);
    printf("%d\n",ansk.size());
    for(i=0;i<ansk.size();i++) printf("%d %d\n",ansk[i].first,ansk[i].second);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
struct A{
    long long v,w,ch;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
vector<pair<long long,long long> > g[100100];
long long dis[100100][5];
int main(){
    long long n,m,k,t,u,v,w,ch,ans;
    scanf("%lld %lld %lld %lld",&n,&m,&k,&t);
    while(m--){
        scanf("%lld %lld %lld",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dis,-1,sizeof dis);
    h.push({1,0,0});
    while(!h.empty()){
        v = h.top().v;
        w = h.top().w;
        ch = h.top().ch;
        h.pop();
        if(dis[v][ch]!=-1) continue;
        dis[v][ch] = w;
        if(v==n){
            ans = dis[n][ch];
            if(ans>t) printf("No Honey TT");
            else{
                printf("Happy Winnie the Pooh :3\n");
                printf("%lld",ans);
                return 0;
            }
        }
        for(auto x: g[v]){
            h.push({x.first,w+x.second,ch});
            if(ch==0 && k<x.second) h.push({x.first,w+k,1});
        }
    }
    return 0;
}
/*
4 4 5 10
1 3 1000
1 2 4
2 4 4
3 4 2
*/

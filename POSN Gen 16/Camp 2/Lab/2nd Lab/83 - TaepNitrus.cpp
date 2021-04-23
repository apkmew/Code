/*
    TASK: TaepNitrus
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > pa[5010];
int dis[110][5010];
struct A{
    int v,w,s;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> pq;
int main()
{
    int n,m,k,a,b,c,v,w,s,i,mi=2e9;
    scanf("%d %d %d",&n,&m,&k);
    while(m--){
        scanf("%d %d %d",&a,&b,&c);
        pa[a].push_back({b,c});
        pa[b].push_back({a,c});
    }
    memset(dis,127,sizeof dis);
    pq.push({1,0,0});
    while(!pq.empty()){
        v = pq.top().v;
        w = pq.top().w;
        s = pq.top().s;
        pq.pop();
        if(v==n && s==0){
            for(i=0;i<=k;i++){
                if(dis[i][n]!=-1 && mi>dis[i][n]){
                    mi = dis[i][n];
                }
            }
            printf("%d\n%d\n%d\n",dis[0][n],mi,dis[0][n]-mi);
            return 0;
        }
        for(auto x: pa[v]){
            if(s!=k && dis[s+1][x.first]>w+x.second/2){
                dis[s+1][x.first] = w+x.second/2;
                pq.push({x.first,dis[s+1][x.first],s+1});
            }
            if(dis[s][x.first]>w+x.second){
                dis[s][x.first] = w+x.second;
                pq.push({x.first,w+x.second,s});
            }
        }
    }
    return 0;
}
/*
6 8 1
1 2 4
1 4 2
2 3 4
2 4 6
3 6 6
4 3 12
4 5 10
5 6 4
*/

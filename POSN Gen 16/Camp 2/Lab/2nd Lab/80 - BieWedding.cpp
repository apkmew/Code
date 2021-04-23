/*
    TASK: Bie Wedding
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
vector<pair<int,int> > g[60];
int dis[60];
int main()
{
    int n,u,v,w,i,ans=2e9;
    char a,b,c;
    scanf("%d",&n);
    while(n--){
        scanf(" %c %c %d",&a,&b,&w);
        if(isupper(a)) u = a - 'A';
        if(isupper(b)) v = b - 'A';
        if(islower(a)) u = a - 'a' + 26;
        if(islower(b)) v = b - 'a' + 26;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    memset(dis,-1,sizeof dis);
    h.push({25,0});
    while(!h.empty()){
        v = h.top().v;
        w = h.top().w;
        h.pop();
        if(dis[v]!=-1) continue;
        dis[v] = w;
        for(auto x: g[v]) h.push({x.first,w+x.second});
    }
    for(i=0;i<25;i++){
        if(dis[i]<ans && dis[i]!=-1){
            ans = dis[i];
            c = i + 'A';
        }
    }
    printf("%c %d",c,ans);
    return 0;
}
/*
5
A d 6
B d 3
C e 9
d Z 8
e Z 3
*/

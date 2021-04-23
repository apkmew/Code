/*
    TASK: BUU Climbing
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
priority_queue<A> hp;
vector<pair<int,int> > g[10100];
int a[110][110],dis[10100];
int main()
{
    int q,r,c,x,y,i,j,u,v,w,d,l,h,mx=-1,f,e,p;
    char z;
    scanf("%d",&q);
    while(q--){
        mx = -1;
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf(" %c",&z);
                if(z=='#') a[i][j]=-1;
                else a[i][j]=z-'0';
                if(a[i][j]>mx){
                    mx = a[i][j];
                    f = (i*c)+(j%c);
                }
            }
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                h = (i*c)+(j%c);
                d = h+c;
                l = h+1;
                e = d+1;
                p = d-1;
                if(a[i][j]==-1) continue;
                if(i+1<r && a[i+1][j]!=-1){
                    w = abs(a[i+1][j]-a[i][j]);
                    w = (w+1)*(w+1);
                    g[h].push_back({d,w});
                    g[d].push_back({h,w});
                }
                if(j+1<c && a[i][j+1]!=-1){
                    w = abs(a[i][j+1]-a[i][j]);
                    w = (w+1)*(w+1);
                    g[h].push_back({l,w});
                    g[l].push_back({h,w});
                }
                if(i+1<r && j+1<c && a[i+1][j+1]!=-1){
                    w = abs(a[i+1][j+1]-a[i][j]);
                    w = (w+1)*(w+1);
                    g[e].push_back({h,w});
                    g[h].push_back({e,w});
                }
                if(i+1<r && j-1>=0 && a[i+1][j-1]!=-1){
                    w = abs(a[i+1][j-1]-a[i][j]);
                    w = (w+1)*(w+1);
                    g[h].push_back({p,w});
                    g[p].push_back({h,w});
                }
            }
        }
        memset(dis,-1,sizeof dis);
        scanf("%d %d",&x,&y);
        d = (x*c) + (y%c);
        hp.push({d,0});
        while(!hp.empty()){
            v = hp.top().v;
            w = hp.top().w;
            hp.pop();
            if(dis[v]!=-1) continue;
            dis[v] = w;
            for(auto x: g[v]) hp.push({x.first,w+x.second});
        }
        if(dis[f]!=-1) printf("%d\n",dis[f]);
        else printf("NO\n");
        for(i=0;i<10100;i++) g[i].clear();
    }
    return 0;
}
/*
2
5 5
11111
1###1
12341
12221
12221
0 0
3 3
1#3
2#3
##4
1 0
*/

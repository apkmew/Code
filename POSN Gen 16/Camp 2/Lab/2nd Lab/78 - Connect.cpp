/*
    TASK: Connect
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int v;
    double w;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> h;
double g[1010][1010];
long long mark[1010][1010];
double a[1010][5],dis[1010];
int main()
{
    long long n,z,i,j,x,y,v;
    double m,d,w;
    scanf("%lld %lld",&n,&z);
    scanf("%lf",&m);
    for(i=1;i<=n;i++){
        scanf("%lf %lf",&a[i][0],&a[i][1]);
    }
    while(z--){
        scanf("%lld %lld",&x,&y);
        g[x][y]=0;
        g[y][x]=0;
        mark[x][y] = 1;
        mark[y][x] = 1;
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(!mark[i][j]){
                mark[i][j] = 1;
                mark[j][i] = 1;
                d = sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])) + ((a[i][1]-a[j][1])*(a[i][1]*a[j][1]));
                printf("%lf ",d);
                if(d<=m){
                    g[i][j]=d;
                    g[j][i]=d;
                }
            }
        }
    }
    memset(dis,-1,sizeof dis);
    memset(g,-1,sizeof g);
    h.push({1,0});
    while(!h.empty()){
        v = h.top().v;
        w = h.top().w;
        h.pop();
        if(dis[v]!=-1) continue;
        dis[v] = w;
        for(i=0;i<1000;i++){
            if(g[v][i]!=-1) h.push({i,w+g[v][i]});
        }
    }
    d = dis[n];
    printf("\n%lf",d);
    if(d==-1) printf("-1\n");
    else printf("\n%d\n",(int)(d*1000));
    return 0;
}
/*
9 3
2.0
0 0
0 1
1 1
2 1
2 2
3 2
3 3
4 1
4 3
1 2
2 3
3 4
*/

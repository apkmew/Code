/*
    TASK: MST
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int p[1010];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
struct A{
    int u,v;
    double w;
    bool operator<(const A& o)const{
        return w<o.w;
    }
};
A a[500100];
int main()
{
    int i,n,m,cnt=0,x,y;
    double ans=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) p[i] = i;
    for(i=0;i<m;i++){
        scanf("%d %d %lf",&a[i].u,&a[i].v,&a[i].w);
    }
    sort(a,a+m);
    for(i=0;cnt<n-1;i++){
        x = fr(a[i].u);
        y = fr(a[i].v);
        if(x!=y){
            p[y] = x;
            ans += a[i].w;
            cnt++;
        }
    }
    printf("%.3lf",ans);
    return 0;
}
/*
4 4
0 1 1
1 2 1
2 3 1
3 0 2
*/

/*
    TASK: Place
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int p[200100];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
struct A{
    int u,v,w;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
A a[1000100];
int main()
{
    long long i,n,m,x,y,ans=0,cnt=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++) p[i] = i;
    for(i=0;i<m;i++){
        scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
        a[i].w -= 1;
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
    printf("%lld",ans);
    return 0;
}
/*
6 9
1 2 8
2 3 6
1 4 6
4 2 6
4 5 8
2 5 7
5 6 5
2 6 9
3 6 5
*/

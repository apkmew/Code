/*
    TASK: MST
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v;
    double w;
    bool operator<(const A& o)const{
        return w < o.w;
    }
};
A a[600000];
int p[1010];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int n,m,i;
    double ans=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) p[i] = i;
    for(i=0;i<m;i++){
        scanf("%d %d %lf",&a[i].u,&a[i].v,&a[i].w);
    }
    sort(a,a+m);
    for(i=0;i<m;i++){
        if(fr(a[i].u)!=fr(a[i].v)){
            ans += a[i].w;
            p[fr(a[i].u)] = fr(a[i].v);
        }
    }
    printf("%.3lf\n",ans);
    return 0;
}
/*
4 4
0 1 1
1 2 1
2 3 1
3 0 2
*/

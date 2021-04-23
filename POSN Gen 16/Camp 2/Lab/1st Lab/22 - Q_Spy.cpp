/*
    TASK: Q_Spy
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int p[1010],c[1010];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
struct A{
    int u,v,w;
    bool operator<(const A& o)const{
        return w < o.w;
    }
};
A a[600000];
int main()
{
    int n,i,j,ch,now,cnt=0,cost=0,x=0,last,y,z,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++) p[i] = i;
    for(i=1;i<=n;i++){
        ch = 0;
        for(j=1;j<=n;j++){
            scanf("%d",&now);
            if(now==0) ch = 1;
            else if(ch==1){
                a[cnt].u = i;
                a[cnt].v = j;
                a[cnt].w = now;
                cnt++;
            }
        }
    }
    for(i=1;i<=n;i++){
        scanf("%d",&a[cnt].w);
        a[cnt].u = 0;
        a[cnt].v = i;
        cnt++;
    }
    sort(a,a+cnt);
    int ans = 0;
    for(i=0;i<cnt;i++){
        y = fr(a[i].u);
        z = fr(a[i].v);
        if(y==z) continue;
        ans += a[i].w;
        p[z] = y;
    }
    printf("%d\n",ans);
    return 0;
}
/*
5
0 3 12 15 11
3 0 14 3 20
12 14 0 11 7
15 3 11 0 15
11 20 7 15 0
5 10 10 10 10
*/

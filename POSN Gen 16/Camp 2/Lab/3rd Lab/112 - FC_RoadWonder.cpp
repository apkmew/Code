/*
    TASK: FC_Road Wonder
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define INF 2e9
using namespace std;
struct A{
    int u,v,w;
};
A a[3000];
long long d[1002],tmp[1002];
int main()
{
    int n,m,k,t,i,j,s;
    scanf("%d %d %d %d",&n,&m,&k,&t);
    for(i=0;i<m;i++){
        scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
    }
    for(i=0;i<k;i++){
        scanf("%d %d %d",&a[i+m].u,&a[i+m].v,&a[i+m].w);
        a[i+m].w *= -1;
    }
    while(t--){
        scanf("%d",&s);
        for(i=1;i<=n;i++) d[i] = INF;
        d[s] = 0;
        for(i=0;i<n-1;i++){
            for(j=0;j<m+k;j++){
                if(d[a[j].u]!=INF){
                    d[a[j].v] = min(d[a[j].v],d[a[j].u]+a[j].w);
                }
            }
        }
        for(i=1;i<=n;i++) tmp[i] = d[i];
        for(j=0;j<m+k;j++){
            if(d[a[j].u]!=INF){
                d[a[j].v] = min(d[a[j].v],d[a[j].u]+a[j].w);
            }
        }
        for(j=1;j<=n;j++){
            if(d[j]==tmp[j] && d[j]!=INF) printf("%lld ",d[j]);
            else printf("-1 ");
        }
        printf("\n");
    }
    return 0;
}
/*
10 5 5 5
1 7 8
2 5 1
3 4 7
5 8 4
5 1 11
10 1 6
10 5 3
10 3 1
9 5 10
5 7 2
2
4
6
8
10
*/

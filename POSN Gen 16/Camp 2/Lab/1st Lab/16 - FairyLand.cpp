/*
    TASK: Fairy Land
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int i,n,m,a,b,x,y,q;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) p[i] = i;
    while(m--){
        scanf("%d %d",&a,&b);
        x = fr(p[a]);
        y = fr(p[b]);
        p[y] = x;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&a,&b);
        x = fr(p[a]);
        y = fr(p[b]);
        if(x==y) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
/*
5 4
3 5
3 4
2 5
3 2
3
1 5
2 4
2 1
*/

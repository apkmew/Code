/*
    TASK: General
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int p[100100],z[100100];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int n,m,i,a,b,x,y;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&z[i]);
        p[i] = i;
    }
    while(m--){
        scanf("%d %d",&a,&b);
        x = fr(p[a]);
        y = fr(p[b]);
        if(x>y) swap(x,y);
        else if(x==y){
            printf("-1\n");
            continue;
        }
        if(z[x]>=z[y]){
            p[y] = x;
            z[x] += z[y]/2;
            printf("%d\n",x);
        }
        else if(z[y]>z[x]){
            p[x] = y;
            z[y] += z[x]/2;
            printf("%d\n",y);
        }
    }
    return 0;
}
/*
5 4
3
4
5
6
7
1 5
1 2
1 2
3 4
*/

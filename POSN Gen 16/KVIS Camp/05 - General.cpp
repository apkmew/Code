/*
    TASK: General
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],z[100100];
int findroot(int i){
    if(p[i]==i)
        return i;
    return p[i] = findroot(p[i]);
}
int main()
{
    int i,n,m,a,b,x,y;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) p[i] = i;
    for(i=1;i<=n;i++) scanf("%d",&z[i]);
    while(m--){
        scanf("%d %d",&a,&b);
        x = findroot(a);
        y = findroot(b);
        if(z[x] > z[y] || (z[x]==z[y] && x<y)){
            p[y] = x;
            z[x] += z[y]/2;
            printf("%d\n",x);
        }
        else if(z[y] > z[x] || (z[x]==z[y] && x>y)){
            p[x] = y;
            z[y] += z[x]/2;
            printf("%d\n",y);
        }
        else if(x==y){
            printf("-1\n");
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

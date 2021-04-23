/*
    TASK: Fairy_Land
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int findroot(int i){
    if(p[i]==i)
        return i;
    return p[i] = findroot(p[i]);
}
int main()
{
    int n,m,q,i,r,s,a,b;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) p[i] = i;
    while(m--){
        scanf("%d %d",&r,&s);
        a = findroot(r);
        b = findroot(s);
        p[b] = a;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&r,&s);
        a = findroot(r);
        b = findroot(s);
        if(a==b) printf("YES\n");
        else     printf("NO\n");
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

/*
    TASK: Milk
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
    int i,n,q,a,b,x,y;
    char c;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++) p[i]=i;
    while(q--){
        scanf(" %c %d %d",&c,&a,&b);
        if(c=='c'){
            x = fr(p[a]);
            y = fr(p[b]);
            p[x] = y;
        }
        if(c=='q'){
            x = fr(p[a]);
            y = fr(p[b]);
            if(x==y) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
/*
5 10
q 1 2
c 1 3
q 3 2
c 3 2
q 1 2
q 4 5
c 4 2
q 4 1
c 1 4
q 5 1
*/

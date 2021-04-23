/*
    TASK: Cable Car
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[3000];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
struct A{
    int u,v,w;
    bool operator<(const A& o)const{
        return w > o.w;
    }
};
A a[1000100];
int main()
{
    int n,m,i,s,d,h,x,y;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) p[i] = i;
    for(i=0;i<m;i++){
        scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
        a[i].w-=1;
    }
    scanf("%d %d %d",&s,&d,&h);
    sort(a,a+m);
    //printf("ch");
    for(i=0;fr(p[s])!=fr(p[d]);i++){
        x = fr(p[a[i].u]);
        y = fr(p[a[i].v]);
        p[y] = x;
        //printf("ch");
    }
    i--;
    x = a[i].w;
    if(h%x!=0) printf("%d",h/x+1);
    else printf("%d",h/x);
    return 0;
}
/*
7 10
1 2 30
1 3 15
1 4 10
2 4 25
2 5 60
3 4 40
4 7 35
3 6 20
5 7 20
7 6 30
1 7 99
*/

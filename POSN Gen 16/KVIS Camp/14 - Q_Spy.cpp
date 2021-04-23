/*
    TASK: Q_Spy
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
    bool operator<(const A& o)const{
        return w < o.w;
    }
};
A a[600100];
int p[1010],x[1010],m[1010],mark[1010];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main()
{
    int n,i,j,cnt=0,ul;
    // ul = useless
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<=j) scanf("%d",&ul);
            else{
                a[cnt].u = i;
                a[cnt].v = j;
                scanf("%d",&a[cnt].w);
                cnt++;
            }
        }
    }
    for(i=0;i<n;i++) scanf("%d",&m[i]);
    sort(a,a+n);

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

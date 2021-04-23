#include <bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w,num;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
A a[100100];
int p[100100];
int fr(int i){
    if(i==p[i]) return i;
    return p[i] = fr(p[i]);
}
int main(){
    int n,m,t,i,j,cnt=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++){
        scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
        a[i].num = i;
    }
    scanf("%d",&t);
    sort(a+1,a+m+1);
    for(i=1;i<=m;i++){
        cnt++;
        if(fr(a[i].u)!=fr(a[i].v))
    }
    return 0;
}

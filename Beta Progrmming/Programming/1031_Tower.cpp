/*
    TASK : Tower
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int u,v;
    bool operator<(const A& o)const{
        return u<o.u;
    }
};
A a[100100];
int dp[10100];
int main(){
    int k,n,m,i,j,u,v;
    scanf("%d %d %d",&k,&n,&m);
    for(i=2;i<=n;i++) dp[i] = 2e9;
    for(i=0;i<m;i++) scanf("%d %d",&a[i].u,&a[i].v);
    sort(a,a+m);
    for(i=0;i<m;i++){
        u = a[i].u; v = a[i].v;
        dp[v] = min(dp[v],dp[u]+1);
    }
    for(i=n;i>=1;i--){
        if(k>=dp[i]){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
/*
2 6 5
1 2
1 3
2 5
3 4
5 6
*/
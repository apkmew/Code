/*
    TASK   : Bread
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int x[1010],y[1010];
vector<int> a;
int main(){
    int w,h,m,n,i,j,area;
    scanf("%d %d %d %d",&w,&h,&m,&n);
    for(i=1;i<=m;i++) scanf("%d",&x[i]);
    for(i=1;i<=n;i++) scanf("%d",&y[i]);
    x[m+1] = w; y[n+1] = h;
    for(i=1;i<=m+1;i++){
        for(j=1;j<=n+1;j++){
            area = (x[i]-x[i-1])*(y[j]-y[j-1]);
            a.push_back(area);
        }
    }
    sort(a.begin(),a.end());
    printf("%d %d",a[a.size()-1],a[a.size()-2]);
    return 0;
}

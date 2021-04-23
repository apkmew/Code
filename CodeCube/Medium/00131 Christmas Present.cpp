#include <bits/stdc++.h>
using namespace std;
int a[110],b[110];
int main(){
    int n,m,i,j,now,ans=1<<30;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            now = a[i]+a[j];
            ans = min(now,ans);
        }
        for(j=0;j<m;j++){
            now = a[i]+b[j]+100;
            ans = min(now,ans);
        }
    }
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            now = b[i]+b[j];
            ans = min(now,ans);
        }
    }
    printf("%d",ans);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
    int x,n,m,i,j,ch=0;
    long long ans=0,cou;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i++){
        x = m - a[i];
        if(x<a[i]) break;
        j = lower_bound(a,a+n,x)-a;
        if(x==a[j]){
            if(a[i]==a[j] && ch==0){
                cou = -1;
                while(a[j]==x) cou++,j++;
                ans += (cou*(1+cou))/2;
                ch = 1;
            }
            else if(a[i]!=a[j]){
                cou = 0;
                while(a[j]==x) cou++,j++;
                ans += cou;
            }
        }
    }
    printf("%lld",ans);
    return 0;
}

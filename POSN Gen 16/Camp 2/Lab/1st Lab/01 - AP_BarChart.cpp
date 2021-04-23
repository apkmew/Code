/*
    TASK: AP Bar Chart
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
long long l[100100],r[100100],a[100100];
int main()
{
    long long i,q,n,ans;
    scanf("%lld",&q);
    while(q--){
        ans = -1;
        scanf("%lld",&n);
        for(i=1;i<=n;i++) scanf("%lld",&a[i]);
        for(i=1;i<=n;i++){
            l[i] = i-1;
            while(l[i]>0 && a[i]<=a[l[i]]) l[i] = l[l[i]];
        }
        for(i=n;i>=1;i--){
            r[i] = i+1;
            while(r[i]>0 && a[i]<=a[r[i]]) r[i] = r[r[i]];
        }
        for(i=1;i<=n;i++) ans = max(ans,(r[i]-l[i]-1)*a[i]);
        printf("%lld\n",ans);
        memset(a,0,sizeof a);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
    }
    return 0;
}


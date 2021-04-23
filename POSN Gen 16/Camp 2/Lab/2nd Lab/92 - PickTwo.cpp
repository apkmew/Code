/*
    TASK: Pick Two
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int l[100100],r[100100],a[100100];
int main()
{
    int q,i,ma,sum,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        ma = -1, sum = 0;
        for(i=1;i<=n;i++){
            sum += a[i];
            sum = max(sum,0);
            l[i] = max(l[i-1],sum);
        }
        ma = -1, sum = 0;
        for(i=n;i>=1;i--){
            sum += a[i];
            sum = max(sum,0);
            r[i] = max(r[i+1],sum);
        }
        ma = -1;
        for(i=1;i<=n;i++){
            ma = max(ma,l[i]+r[i+1]);
        }
        printf("%d",ma);
    }
    return 0;
}

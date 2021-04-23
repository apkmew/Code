/*
    TASK: NBK48
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main()
{
    int n,q,now,k,i,l,r,mid,last=0;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&now);
        a[i] = now + a[i-1];
    }
    for(i=n-1;i>=1;i--){
        a[i] = min(a[i],a[i+1]);
    }
    while(q--){
        scanf("%d",&k);
        l = upper_bound(a+1,a+n+1,k)-a;
        printf("%d\n",l-1);
    }
    return 0;
}
/*
5 3
10 20 -10 30 60
31
52
9
*/
